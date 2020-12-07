#ifndef MINIDIALOG_H
#define MINIDIALOG_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include <iostream>
#include "opencv2/opencv.hpp"
#include "main_form_page.h"

using namespace std;
namespace Ui {
    class MiniDialog;
    }

class MiniDialog : public QDialog
{
    Q_OBJECT
private:
   QString width_text;
   QString height_text;
   QString name_text;

    int screen_width;
    int screen_height;

    string screen_name;
    Main_Form_Page * page;
public:
    explicit MiniDialog(QWidget *parent = nullptr);
    ~MiniDialog();

private slots:
    void on_btn_make_clicked(); // 만들기 버튼 이벤트

    void on_btn_close_clicked(); // 닫기 버튼 이벤트

private:
    Ui::MiniDialog *ui;
};

#endif // MINIDIALOG_H
