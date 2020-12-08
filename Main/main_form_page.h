#ifndef MAIN_FORM_PAGE_H
#define MAIN_FORM_PAGE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QColorDialog>
#include <QFileDialog>
#include <QFileInfo>
#include <QDir>
#include <opencv2/opencv.hpp>
#include <mypaintimage.h>
#include <iostream>
#include <vector>
#include <algorithm>

#include "group_new.h"
#include "Singleton_Paint.h"

using namespace std;
namespace Ui {
    class Main_Form_Page;
}

class Main_Form_Page : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_Form_Page(QWidget *parent = nullptr);


    // 불러온 이미지 새로고침 (리스트에 추가할 목적)
    void Refresh();

    // 불러온 이미지 이름
    vector<Image_Information_Class> image_name_vector;

    ~Main_Form_Page();
    void menu_new(); //  메뉴 - 새파일
    void menu_open(); // 메뉴 - 파일 열기
    void menu_save(); // 메뉴 - 저장
    void menu_exit(); // 메뉴 - 종료

    void connectList(); // 연결 리스트 목록
    void filter(cv::Mat, cv::Mat&, cv::Mat); // 회선이용


signals:
    void onClickedSig(); // 시그널

public slots:
    void onMakeImage(Image_Information_Class _info);
    void onRemoveImage(int _index);

private slots:
    void on_list_image_itemClicked(QListWidgetItem *item); // 리스트 클릭 이벤트

    void on_actionNew_File_triggered(); // 메뉴 새로만들기

    void on_actionOpen_File_triggered();

    void on_actionSave_File_triggered();

    void on_actionExit_triggered();

    // 새로 생성
    void slot_new_file();

    // 생성 창을 닫을 때 사용하는 함수
    void slot_close();

    void on_list_image_itemDoubleClicked(QListWidgetItem *item);

    void on_btn_Draw_clicked();

    void on_btn_color_clicked();

    void on_btn_eraser_clicked();

    void on_btn_rect_clicked();

    void on_btn_circle_clicked();

    void on_btn_text_clicked();

    void on_radio_1_clicked();
    void on_radio_2_clicked();
    void on_radio_3_clicked();
    void on_radio_4_clicked();
    void on_radio_5_clicked();
    void on_radio_6_clicked();
    void on_radio_7_clicked();
    void on_radio_8_clicked();
    void on_radio_9_clicked();


    void on_btn_fill_clicked();

    void on_btn_list_close_clicked();

    void on_filter_channel_triggered();

    void on_filter_light_triggered();

    void on_fliter_dark_triggered();

    void on_fliter_reverse_triggered();

    void on_action_triggered();

    void on_filter_Sype_triggered();


    void on_btn_origin_clicked();

private:
    Ui::Main_Form_Page *ui;
    MouseEventClass mec;

    group_new _gr_info;
    bool new_count = false;

    double fps; // 프레임 수
   int delay; // 지연시간
   int fourcc; // 압축코덱

};

#endif // MAIN_FORM_PAGE_H
