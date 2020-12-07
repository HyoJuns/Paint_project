#ifndef MYPAINTIMAGE_H
#define MYPAINTIMAGE_H
#include <QPixmap>
#include <QImage>
#include <QMessageBox>
#include <opencv2/opencv.hpp>
#include "opencv_convert.h"
#include "Singleton_Paint.h"
using namespace std;

class Image_Information_Class
{
private:
    int image_width;
    int image_height;

    string image_name;
    string image_short_name;

    bool is_check = false;

    cv::Mat image_mat;
    cv::Mat origin_mat; // 원본

public:
    // 정보 입력
    Image_Information_Class(string _n,int _w, int _h, cv::Mat _m);
    Image_Information_Class(string _n,int _w, int _h, cv::Mat _m, cv::Mat _origin);
    // 창 뛰우기
    void Image_Show();

    // 체크 상태 변경
    void Set_Check(bool _n)
    {
        is_check = _n;
    }

    // 체크 상태 확인
    bool get_check() const
    {
        return is_check;
    }
    void Set_Short_name(string msg){image_short_name = msg;}
    void Set_Met(cv::Mat _image){image_mat = _image;}
    string get_short_image_name() const {return image_short_name;}
    // 이름 반환
    string get_image_name() const
    {
        return image_name;
    }

    // 행렬 반환
    cv::Mat get_image_mat() const
    {
        return image_mat;
    }

    cv::Mat get_origin_image_mat() const {return origin_mat;}
    int get_image_width() const {return image_width; }
    int get_image_height() const {return image_height;}

};

class MouseEventClass
{
private:
public:
    // _class에 데이터를 넣기 위한 함수
    void SettingInfoClass(Image_Information_Class &, bool);

};

// 마우스 이벤트 콜백함수
void onMouseEvent(int, int, int ,int, void *);



#endif // MYPAINTIMAGE_H
