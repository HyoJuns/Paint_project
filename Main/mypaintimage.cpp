#include "mypaintimage.h"


/*
 * 이미지 정보 클래스
 */
Image_Information_Class::Image_Information_Class(string _n,int _w, int _h, cv::Mat _m)
{
    image_name = _n;
    image_width = _w;
    image_height = _h;
    image_mat = _m;
    origin_mat = _m;
}
 Image_Information_Class::Image_Information_Class(string _n,int _w, int _h, cv::Mat _m, cv::Mat _origin)
 {
     image_name = _n;
     image_width = _w;
     image_height = _h;
     image_mat = _m;
     origin_mat = _origin;
 }
/*
 * 이미지 보여주기
 */
void Image_Information_Class::Image_Show()
{
    cv::destroyAllWindows();

    // 이름 지정
    cv::namedWindow(get_image_name(), cv::WINDOW_AUTOSIZE);

    // 윈도우 이동
    cv::moveWindow(get_image_name(),1000, 200);

    // 행렬 원소를 영상으로 표시
    cv::imshow(get_image_name(), get_image_mat());
}

/*
 * 마우스 콜백 함수
 */
void onMouseEvent(int event, int x, int y ,int flags, void * param)
{
    // 마우스 이동할 행렬
    Image_Information_Class temp = *(Image_Information_Class *)param;
    cv::Mat mouseImage = temp.get_image_mat();
    string name = temp.get_image_name();
    QColor brush_color = SingleTon_Paint::getInstance().Get_Brush_Color();
    CHOICE_BUTTON choice =  SingleTon_Paint::getInstance().Get_Switch_Mode();
    try {
        if(choice == SELECT_BUTTON_DRAW || choice == SELECT_BUTTON_ERASER)
        {
            switch(event)
            {
                // 마우스 이동
            case CV_EVENT_MOUSEMOVE:
                if(flags & CV_EVENT_LBUTTONDOWN)
                {
                    // 브러쉬
                    if( choice == SELECT_BUTTON_DRAW)
                    {
                         int brush_size = SingleTon_Paint::getInstance().Get_Brush_Size();
                        //cout << cv::Point(x,y) << endl;
                        cv::circle(mouseImage,cv:: Point(x,y),brush_size, QcolorToScalar(brush_color), -1 );
                        imshow(name, mouseImage);
                    }
                    // 지우개
                    else if(choice == SELECT_BUTTON_ERASER)
                    {
                         int eraser_size = SingleTon_Paint::getInstance().Get_Eraser_Size();
                        cv::circle(mouseImage, cv::Point(x,y), eraser_size, cv::Scalar(255,255,255),-1);
                        imshow(name, mouseImage);
                    }
                }
                break;
            }
        }
        else if(choice == SELECT_BUTTON_RECT || choice == SELECT_BUTTON_CIRCLE)
        {
            switch(event)
            {

            // 마우스 왼쪽 버튼 누른 상태
            case CV_EVENT_LBUTTONDOWN:
                static cv::Point pt(-1, -1);
                if(choice == SELECT_BUTTON_RECT)
                {
                    int rect_size = SingleTon_Paint::getInstance().Get_Rect_Size();
                    if(pt.x <0) pt = cv::Point(x,y); // 시작 좌표 지정
                    else
                    {
                        // 사각형 생성
                        cv::rectangle(mouseImage, pt, cv::Point(x,y),  QcolorToScalar(brush_color), rect_size );
                        imshow(name, mouseImage);
                        pt = cv::Point(-1,-1);
                    }
                }else if(choice == SELECT_BUTTON_CIRCLE)
                {
                    int circle_size = SingleTon_Paint::getInstance().Get_Circle_Size();
                    if(pt.x <0) pt = cv::Point(x,y); // 시작 좌표 지정
                    else
                    {
                        cv::Point2d pt2 = pt - cv::Point(x,y);
                        int radius = (int)sqrt(pt2.x * pt2.x + pt2.y * pt2.y); // 두 좌표간 거리
                        // 구체 생성
                        cv::circle(mouseImage, pt,radius, QcolorToScalar(brush_color), circle_size );
                        imshow(name, mouseImage);
                        pt = cv::Point(-1,-1);
                    }
                }

                break;
            }
        }else if(choice == SELECT_BUTTON_TEXT)
        {
            switch(event)
            {
            // 더블클릭
            case CV_EVENT_LBUTTONDBLCLK:
                if(choice == SELECT_BUTTON_TEXT)
                {
                     string msg = SingleTon_Paint::getInstance().Get_Text();
                     CHOICE_FONT font = SingleTon_Paint::getInstance().Get_Font_Mode();
                    //cv::putText(mouseImage, msg, cv::Point(x,y), font,1,QcolorToScalar(brush_color));
                     switch(font)
                     {
                     case SELECT_FONT_NORMAL: // SELECT_FONT_NORMAL
                            cv::putText(mouseImage, msg, cv::Point(x,y), cv::FONT_HERSHEY_SIMPLEX,1,QcolorToScalar(brush_color));
                         break;
                     case SELECT_FONT_PLAIN: // SELECT_FONT_PLAIN
                            cv::putText(mouseImage, msg, cv::Point(x,y), cv::FONT_HERSHEY_PLAIN,1,QcolorToScalar(brush_color));
                         break;
                     case SELECT_FONT_DUPLEX: // SELECT_FONT_DUPLEX
                            cv::putText(mouseImage, msg, cv::Point(x,y), cv::FONT_HERSHEY_DUPLEX,1,QcolorToScalar(brush_color));
                         break;
                     case SELECT_FONT_COMPLEX: // SELECT_FONT_COMPLEX
                            cv::putText(mouseImage, msg, cv::Point(x,y), cv::FONT_HERSHEY_COMPLEX,1,QcolorToScalar(brush_color));
                         break;
                     case SELECT_FONT_TRIPLEX: // SELECT_FONT_TRIPLEX
                            cv::putText(mouseImage, msg, cv::Point(x,y), cv::FONT_HERSHEY_TRIPLEX,1,QcolorToScalar(brush_color));
                         break;
                     case SELECT_FONT_COMPLEX_SMALL: // SELECT_FONT_COMPLEX_SMALL
                            cv::putText(mouseImage, msg, cv::Point(x,y), cv::FONT_HERSHEY_COMPLEX_SMALL,1,QcolorToScalar(brush_color));
                         break;
                     case SELECT_FONT_SCRIPT_SIMPLEX: // SELECT_FONT_SCRIPT_SIMPLEX
                            cv::putText(mouseImage, msg, cv::Point(x,y), cv::FONT_HERSHEY_SCRIPT_SIMPLEX,1,QcolorToScalar(brush_color));
                         break;
                     case SELECT_FONT_SCRIPT_COMPLEX: // SELECT_FONT_SCRIPT_COMPLEX
                            cv::putText(mouseImage, msg, cv::Point(x,y), cv::FONT_HERSHEY_SCRIPT_COMPLEX,1,QcolorToScalar(brush_color));
                         break;
                     case SELECT_FONT_ITALIC: // SELECT_FONT_ITALIC
                            cv::putText(mouseImage, msg, cv::Point(x,y), cv::FONT_ITALIC,1,QcolorToScalar(brush_color));
                         break;
                     }

                    imshow(name, mouseImage);
                }
                break;
            }
        }
    }  catch (cv::Exception &e) {
            cout << "Exception[] " << e.code << " ]  " << e.what() << endl;
    }




}

// 클래스 설정
void MouseEventClass::SettingInfoClass(Image_Information_Class &_n, bool _c)
{
    cout << "SettingInfoClass" <<endl;
    cout << "Image Info name : " <<_n.get_image_name() << endl;
    cv::Mat sender = _n.get_image_mat();
    cv::resizeWindow(_n.get_image_name(),_n.get_image_mat().cols ,_n.get_image_mat().rows);
    // 해당 이미지 보여주기
    if(_c){
        _n.Image_Show();
    }
    cv::setMouseCallback(_n.get_image_name(), onMouseEvent, (void *)&_n);
}

