#ifndef OPENCV_CONVERT_H
#define OPENCV_CONVERT_H

#include "opencv2/opencv.hpp"
#include <QImage>
#include <QDebug>
#include <QPixmap>
#include <iostream>

/*
 * https://asmaloney.com/2013/11/code/converting-between-cvmat-and-qimage-or-qpixmap/
 * QImage, QPixmap을 Mat으로 변환하는 함수
 * Mat 데이터를 QImage, QPixmap으로 변환하는 함수
 */
QImage  cvMatToQImage( const cv::Mat &inMat );      // OpenCV -> QT Convert

QPixmap cvMatToQPixmap( const cv::Mat &inMat ); // OpenCV -> QT Convert

cv::Mat QImageToCvMat( const QImage &inImage, bool inCloneImageData = true ); // QT -> OpenCV Convert

cv::Mat QPixmapToCvMat( const QPixmap &inPixmap, bool inCloneImageData = true );  // QT -> OpenCV Convert

cv::Scalar QcolorToScalar(QColor &color); // QT -> opencv

QColor cvScalarToQColor(cv::Scalar &color); // opencv -> QT

#endif // OPENCV_CONVERT_H
