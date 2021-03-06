#include "opencv_convert.h"

/*
 * @name : cvMatToQImage( const Mat &inMat)
 * @description : OpenCV에서 Mat 클래스를 이용하여 데이터를 얻은 것을 QImage로 변환시켜준다.
 */
QImage  cvMatToQImage( const cv::Mat &inMat )
{
switch ( inMat.type() )
{
 // 8-bit, 4 channel
 case CV_8UC4:
 {
    QImage image( inMat.data,
                  inMat.cols, inMat.rows,
                  static_cast<int>(inMat.step),
                  QImage::Format_ARGB32 );

    return image;
 }

 // 8-bit, 3 channel
 case CV_8UC3:
 {
    QImage image( inMat.data,
                  inMat.cols, inMat.rows,
                  static_cast<int>(inMat.step),
                  QImage::Format_RGB888 );

    return image.rgbSwapped();
 }

 // 8-bit, 1 channel
 case CV_8UC1:
 {
#if QT_VERSION >= QT_VERSION_CHECK(5, 5, 0)
    QImage image( inMat.data,
                  inMat.cols, inMat.rows,
                  static_cast<int>(inMat.step),
                  QImage::Format_Grayscale8 );
#else
    static QVector<QRgb>  sColorTable;

    // only create our color table the first time
    if ( sColorTable.isEmpty() )
    {
       sColorTable.resize( 256 );

       for ( int i = 0; i < 256; ++i )
       {
          sColorTable[i] = qRgb( i, i, i );
       }
    }

    QImage image( inMat.data,
                  inMat.cols, inMat.rows,
                  static_cast<int>(inMat.step),
                  QImage::Format_Indexed8 );

    image.setColorTable( sColorTable );
#endif

    return image;
 }

 default:
    qWarning() << "ASM::cvMatToQImage() - cv::Mat image type not handled in switch:" << inMat.type();
    break;
}

return QImage();
}


/*
 * @name : cvMatToQPixmap( const Mat &inMat)
 * @description : OpenCV에서 Mat 클래스를 이용하여 데이터를 얻은 것을 QPixmap로 변환시켜준다..
 */
QPixmap cvMatToQPixmap( const cv::Mat &inMat )
{
return QPixmap::fromImage( cvMatToQImage( inMat ) );
}

/*
 * @name : QImageToCvMat( const QImage &inImage, bool inCloneImageData)
 * @description :QT 프레임워크를 통해 만들어진 QImage 데이터를 Mat으로 변환시켜준다.
 */
cv::Mat QImageToCvMat( const QImage &inImage, bool inCloneImageData  )
{
  switch ( inImage.format() )
  {
     // 8-bit, 4 channel
     case QImage::Format_ARGB32:
     case QImage::Format_ARGB32_Premultiplied:
     {
        cv::Mat  mat( inImage.height(), inImage.width(),
                      CV_8UC4,
                      const_cast<uchar*>(inImage.bits()),
                      static_cast<size_t>(inImage.bytesPerLine())
                      );

        return (inCloneImageData ? mat.clone() : mat);
     }

     // 8-bit, 3 channel
     case QImage::Format_RGB32:
     {
        if ( !inCloneImageData )
        {
           qWarning() << "ASM::QImageToCvMat() - Conversion requires cloning so we don't modify the original QImage data";
        }

        cv::Mat  mat( inImage.height(), inImage.width(),
                      CV_8UC4,
                      const_cast<uchar*>(inImage.bits()),
                      static_cast<size_t>(inImage.bytesPerLine())
                      );

        cv::Mat  matNoAlpha;

        cv::cvtColor( mat, matNoAlpha, cv::COLOR_BGRA2BGR );   // drop the all-white alpha channel

        return matNoAlpha;
     }

     // 8-bit, 3 channel
     case QImage::Format_RGB888:
     {
        if ( !inCloneImageData )
        {
           qWarning() << "ASM::QImageToCvMat() - Conversion requires cloning so we don't modify the original QImage data";
        }

        QImage   swapped = inImage.rgbSwapped();

        return cv::Mat( swapped.height(), swapped.width(),
                        CV_8UC3,
                        const_cast<uchar*>(swapped.bits()),
                        static_cast<size_t>(swapped.bytesPerLine())
                        ).clone();
     }

     // 8-bit, 1 channel
     case QImage::Format_Indexed8:
     {
        cv::Mat  mat( inImage.height(), inImage.width(),
                      CV_8UC1,
                      const_cast<uchar*>(inImage.bits()),
                      static_cast<size_t>(inImage.bytesPerLine())
                      );

        return (inCloneImageData ? mat.clone() : mat);
     }

     default:
        qWarning() << "ASM::QImageToCvMat() - QImage format not handled in switch:" << inImage.format();
        break;
  }

  return cv::Mat();
}

// If inPixmap exists for the lifetime of the resulting cv::Mat, pass false to inCloneImageData to share inPixmap's data
// with the cv::Mat directly
//    NOTE: Format_RGB888 is an exception since we need to use a local QImage and thus must clone the data regardless
/*
 * @name : QPixmapToCvMat( const QImage &inImage, bool inCloneImageData)
 * @description :QT 프레임워크를 통해 만들어진 QPixmap 데이터를 Mat으로 변환시켜준다.
 */
cv::Mat QPixmapToCvMat( const QPixmap &inPixmap, bool inCloneImageData )
{
  return QImageToCvMat( inPixmap.toImage(), inCloneImageData );
}

/*
 * @name : cv::Scalar QcolorToScalar(QColor &color)
 * @description :QColor를 Scalar 로 변환
 */
cv::Scalar QcolorToScalar(QColor &color)
{
    int r,g,b;
    color.getRgb(&r, &g, &b);
    return cv::Scalar(b,g,r); // RGB -> BGR
}
/*
 * @name : QColor cvScalarToQColor(cv::Scalar &color)
 * @description :Scalar 를 QColor로 변환
 */
QColor cvScalarToQColor(cv::Scalar &color)
{
    return QColor(color[2], color[1], color[0]); // RGB -> BGR
}
