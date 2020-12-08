#ifndef SINGLETON_PAINT_H
#define SINGLETON_PAINT_H

#include <QMessageBox>
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;
#pragma region ENUM Setting
enum CHOICE_BUTTON
{
    SELECT_BUTTON_NONE = -1,            // 아무것도 안함
    SELECT_BUTTON_DRAW = 0,             // 브러쉬
    SELECT_BUTTON_ERASER = 1,           // 지우개
    SELECT_BUTTON_RECT ,                        // 사각형
    SELECT_BUTTON_CIRCLE,                     // 원
    SELECT_BUTTON_TEXT                          // 텍스트
};

enum CHOICE_FONT
{
    SELECT_FONT_NORMAL = 0,             // 중간 크기 산세리프 폰트
    SELECT_FONT_PLAIN,                          // 작은 크기 산세리프 폰트
    SELECT_FONT_DUPLEX,                     // 2줄 산세리프 폰트
    SELECT_FONT_COMPLEX,                  // 중간 크기 세리프 폰트
    SELECT_FONT_TRIPLEX,                      // 3줄 세리프 폰트
    SELECT_FONT_COMPLEX_SMALL,  // COMPLEX 보다 작은 크기
    SELECT_FONT_SCRIPT_SIMPLEX,     // 필기체 스타일
    SELECT_FONT_SCRIPT_COMPLEX, // 복잡한 필기체 스타일
    SELECT_FONT_ITALIC                          // 이탤릭체를 위한 플래그
};
#pragma endregion

namespace DataBox
{
#pragma region DataFile Class
    class DataFile
    {
    private:
        CHOICE_BUTTON choice_button; // 내가 무슨 버튼을 눌렀는가?
        CHOICE_FONT choice_font;     // 내가 무슨 폰트를 사용하는가?

        int brush_size;              // 브러쉬 사이즈
        QColor brush_color;          // 브러쉬 색상

        QString text_message;        // 행렬에 보낼 메세지

        int eraser_size;             // 지우개 사이즈
        int straight_line_size;      // 직선 선 사이즈
        int rect_line_size;          // 사각형 선 사이즈 -1이면 fill
        int circle_line_size;        // 동그라미 선 사이즈 -1이면 fill

        int brightness_value; // 밝기

        bool camera_check ;
    public:
        void S_Choice_Button(CHOICE_BUTTON _choice){choice_button = _choice;}
        void S_Choice_Font(CHOICE_FONT _choice){choice_font = _choice;}
        void S_Brush_Size(int n) {brush_size = n;}
        void S_Brush_Color(QColor q){brush_color = q;}
        void S_Eraser_Size(int n){eraser_size = n;}
        void S_Rect_Size(int n){rect_line_size = n;}
        void S_Circle_Size(int n){circle_line_size = n;}
        void S_Text_Message(QString m){text_message = m;}
        void S_Straight_Line_Size(int n){straight_line_size = n;}
        void S_Brightness_Value(int n){brightness_value = n;}
        void S_Camera_Check(bool n){camera_check = n;}

        CHOICE_BUTTON G_Choice_Button(){return choice_button;}
        CHOICE_FONT G_Choice_Font(){return choice_font;}
        QColor G_Brush_Color(){return brush_color;}
        string G_Text_Message(){return text_message.toStdString();}
        int G_Eraser_Size(){return eraser_size;}
        int G_Bursh_Size(){return brush_size;}
        int G_Rect_Size(){return rect_line_size;}
        int G_Circle_Size(){return circle_line_size;}
        int G_Straight_Line_Size(){return straight_line_size;}
        int G_Brightness_Value(){return brightness_value;}
        bool G_Camera_Check(){return camera_check;}
    };

#pragma endregion
}

using namespace DataBox;

// 싱글턴 패턴
class SingleTon_Paint
{
#pragma region 기본 싱글톤
private:

    static bool destroyed ;
    static SingleTon_Paint * psing;

    DataFile * _data;

    SingleTon_Paint() { _data = new DataFile();}
    SingleTon_Paint(const SingleTon_Paint & other);

    ~SingleTon_Paint()
    {
        delete _data;
        destroyed = true;
    }

    static void create()
    {
        static SingleTon_Paint init;

        psing = &init;
    }

    static void kill_SingleTon()
    {
        psing->~SingleTon_Paint();
    }
#pragma endregion
public:
#pragma region 싱글톤 기본
    static SingleTon_Paint &getInstance()
    {
        if(destroyed)
        {
            new (psing) SingleTon_Paint;
            atexit(kill_SingleTon);
            destroyed = false;
        }else if(psing == 0)
        {
            create();
        }

        return *psing;
    }
#pragma endregion
public:
    void Set_Brush_Size(const int value){_data->S_Brush_Size(value);}
    void Set_Switch_Mode(const CHOICE_BUTTON value){_data->S_Choice_Button(value);}
    void Set_Font_Mode(const CHOICE_FONT value){_data->S_Choice_Font(value);}
    void Set_Brush_Color(const QColor color){_data->S_Brush_Color(color);}
    void Set_Eraser_Size(const int value){_data->S_Eraser_Size(value);}
    void Set_Rect_Size(const int value){_data->S_Rect_Size(value);}
    void Set_Circle_Size(const int value){_data->S_Circle_Size(value);}
    void Set_Text(const QString value){_data->S_Text_Message(value);}
    void Set_Line(const int value){_data->S_Straight_Line_Size(value);}
    void Set_Brightness(const int value){_data->S_Brightness_Value(value);}
    void Set_Camera_Check(const bool value) {_data->S_Camera_Check(value);}

    string Get_Text() {return _data->G_Text_Message();}
    int Get_Circle_Size(){return _data->G_Circle_Size();}
    int Get_Rect_Size(){return _data->G_Rect_Size();}
    int Get_Eraser_Size() {return _data->G_Eraser_Size();}
    int Get_Brush_Size(){return _data->G_Bursh_Size();}
    int Get_Line(){return _data->G_Straight_Line_Size();}
    int Get_Brightness(){return _data->G_Brightness_Value();}
    QColor Get_Brush_Color() {return _data->G_Brush_Color();}
    CHOICE_BUTTON Get_Switch_Mode(){return _data->G_Choice_Button();}
    CHOICE_FONT Get_Font_Mode(){return _data->G_Choice_Font();}
    bool Get_Camera_Check(){return _data->G_Camera_Check();}
};


#endif // SINGLETON_PAINT_H
