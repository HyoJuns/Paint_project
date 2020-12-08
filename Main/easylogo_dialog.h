#ifndef EASYLOGO_DIALOG_H
#define EASYLOGO_DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QFileDialog>
#include <QString>
#include <iostream>
#include "paintdialog.h"
#include "main_form_page.h"
#include "mypaintimage.h"
using namespace std;

namespace Ui {
    class easylogo_Dialog;
}

/*
 * @classname : easylogo_Dialog
 * @description : 맨 처음 시작하는 다이얼로그 화면이다.
 */
class easylogo_Dialog : public QDialog
{
    // Slots 기능 활성화
    Q_OBJECT

public:
    // 자신이 원하지 않는 형변환이 일어나지 않도록 제한하는 생성자
    explicit easylogo_Dialog(QWidget *parent = nullptr);
    // 소멸자
    ~easylogo_Dialog();

    // 신호를 주고 받기 위한 함수
private slots:
    // New Button OnClick() Event
    void on_btn_new_clicked();
    // Open Button OnClick() Event
    void on_btn_open_clicked();
    // GitHub Page Button OnClick() Event
    void on_btn_git_clicked();

private:
    // 다이얼로그 안에 있는 객체들을 다루기 위해 선언
    Ui::easylogo_Dialog *ui;

    // 새 파일 버튼 누른 후에 이동할 다이얼로그 변수
    PaintDialog *paintdialog;

    // 파일 경로
    QString filePath;

    // 파일 이름
    QString fileName;

    // 경로 포함 파일 이름 변수
    string stdstring;

    // 메인 폼으로 가는 변수
    Main_Form_Page * page;

    // 리스트 목록에 넣을 이미지 정보 클래스 변수
    Image_Information_Class * info;
};

#endif // EASYLOGO_DIALOG_H
