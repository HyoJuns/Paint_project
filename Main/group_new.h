#ifndef GROUP_NEW_H
#define GROUP_NEW_H

#include <QGroupBox>
#include <QDialog>
#include <QString>
#include <QMessageBox>
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
namespace Ui {
    class group_new;
    }

class group_new : public QGroupBox
{
    Q_OBJECT

public:
    explicit group_new(QWidget *parent = nullptr);
    ~group_new();
    QString get_width() const {return width_text;}
    QString get_height() const {return height_text;}
    QString get_name() const {return name_text;}
private slots:
    void on_btn_make_clicked();

    void on_btn_close_clicked();
signals:
    void sigClicked(); // 클릭 시그널
    void sigCancelClicked(); // 취소 시그널
private:
    Ui::group_new *ui;
    QString width_text;
    QString height_text;
    QString name_text;


};

#endif // GROUP_NEW_H
