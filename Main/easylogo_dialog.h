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

class easylogo_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit easylogo_Dialog(QWidget *parent = nullptr);
    ~easylogo_Dialog();

private slots:
    void on_btn_new_clicked(); // 새 파일 버튼 클릭 이벤트

    void on_btn_open_clicked(); // 열기 파일 버튼 클릭 이벤트

    void on_btn_git_clicked();

private:
    Ui::easylogo_Dialog *ui;
    PaintDialog *paintdialog; // 다음  이동할 포인트 변수

    QString filePath; // 파일 경로 변수
    QString fileName; // 파일 이름 변수

    string stdstring;

    Main_Form_Page * page;
    Image_Information_Class * info;
};

#endif // EASYLOGO_DIALOG_H
