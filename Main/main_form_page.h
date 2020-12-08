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

/*
 * @classname : Main_Form_Page
 * @description : 본체라고 할 수 있는 메인 폼이다.
 */
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

    /*
     * 시그널 슬롯 시스템이란?
     * 다른 프레임워크와 구별 짓는 Qt의 가장 큰 특징이며, 오브젝트간 통신을 위해 사용한다.
     * 가장 쉬운 예로는 버튼을 누르면 이벤트를 받아 라벨 텍스트를 출력한다거나 하는데 쓸 수 있다.
     * 또한 콘솔 프로그래밍에서 비동기 호출이 필요한 pipe/socket/serial port 등에서 유용하게 사용할 수 잇으며,
     * QObject 상속 받은 모든 클래스에서 사용할 수 있다.
     */
signals:
    void onClickedSig(); // 시그널

public slots:
    void onMakeImage(Image_Information_Class _info);    // group_new 위젯에서 만들기 버튼을 눌렀을 경우의 슬롯
    void onRemoveImage(int _index);                     // 이미지 삭제 슬롯

private slots:
    void on_list_image_itemClicked(QListWidgetItem *item); // 리스트 클릭 이벤트

    void on_actionNew_File_triggered(); // 메뉴 목록 New Event

    void on_actionOpen_File_triggered(); // 메뉴 목록 File Open Event

    void on_actionSave_File_triggered(); // 메뉴 목록 Save Event

    void on_actionExit_triggered(); // 메뉴 목록 Exit Event

    // 새로 생성
    void slot_new_file();

    // 생성 창을 닫을 때 사용하는 함수
    void slot_close();

    // 리스트 목록 더블 클릭 이벤트
    void on_list_image_itemDoubleClicked(QListWidgetItem *item);
    // 드로우 버튼 이벤트
    void on_btn_Draw_clicked();
    // 색상 변경 이벤트
    void on_btn_color_clicked();
    // 지우개 이벤트
    void on_btn_eraser_clicked();
    // 사각형 이벤트
    void on_btn_rect_clicked();
    // 구체 이벤트
    void on_btn_circle_clicked();
    // 텍스트 이벤트
    void on_btn_text_clicked();

    // 채우기 이벤트
    void on_btn_fill_clicked();

    // 텍스트 Radiobutton 이벤트
    void on_radio_1_clicked();
    void on_radio_2_clicked();
    void on_radio_3_clicked();
    void on_radio_4_clicked();
    void on_radio_5_clicked();
    void on_radio_6_clicked();
    void on_radio_7_clicked();
    void on_radio_8_clicked();
    void on_radio_9_clicked();


    // 리스트 목록 삭제 이벤트
    void on_btn_list_close_clicked();

    // 메뉴 필터목록 채널 이벤트
    void on_filter_channel_triggered();
    // 메뉴 필터목록 밝기 이벤트
    void on_filter_light_triggered();
    // 메뉴 필터목록 어둡게 이벤트
    void on_fliter_dark_triggered();
    // 메뉴 필터목록 반전 이벤트
    void on_fliter_reverse_triggered();
    // 메뉴 도움목록 이벤트
    void on_action_triggered();
    // 회선을 이용한 샤프닝 이벤트
    void on_filter_Sype_triggered();

    //
    void on_btn_origin_clicked();

    /*
     * 화소 기반 처리 = 화소값 각각에 대해 여러 가지 연산을 수행하는 것
     * 공간 영역 기반 처리 = 마스크라 불리는 규정된 영역을 기반으로 연산이 수행된다.
     * 마스크 기반 처리 = 마스크 내의 원소값과 공간 영역에 있는 입력 영상의 화소값들을 대응되게 곱하여 출력화소값을 계산하는 것을 말한다.
     * 이러한 처리를 하는 과정을 모든 출력화소값에 대해 이동하면서 수행하는 것을 "회선" 이라고 한다.
     * 이때 입력영상에 곱해지는 이 마스크는 커널, 윈도우, 필터 등의 다른 용어로 불려진다.
     */
private:
    Ui::Main_Form_Page *ui;

    // 마우스 이벤트 클래스
    MouseEventClass mec;

    // 새로만드는 폼
    group_new _gr_info;
    bool new_count = false;

    // 사용안함
    double fps; // 프레임 수
   int delay; // 지연시간
   int fourcc; // 압축코덱

};

#endif // MAIN_FORM_PAGE_H
