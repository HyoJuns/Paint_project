#ifndef PAINTDIALOG_H
#define PAINTDIALOG_H

#include <QDialog>
#include <QString>
#include <QColorDialog>
#include <QMessageBox>

#include "opencv_convert.h"
#include "opencv2/opencv.hpp"
#include "main_form_page.h"
#include "mypaintimage.h"
#include "opencv_convert.h"
#include <iostream>
namespace Ui {
    class PaintDialog;
    }

class PaintDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PaintDialog(QWidget *parent = nullptr);
    ~PaintDialog();

private slots:
    void on_btn_make_clicked(); // 만들기 버튼 클릭 이벤트
    void on_btn_close_clicked(); // 종료 버튼 클릭 이벤트

private:
    Ui::PaintDialog *ui;
    Main_Form_Page * page;

    // TEXT 문자열로 받는 변수
    QString width_string;
    QString height_string;
    QString name_string;

    // QString을 int 형으로 변환하여 받을 변수
    int width_int;
    int height_int;

    // 배경색상
    QColor background_color;
};

#endif // PAINTDIALOG_H
