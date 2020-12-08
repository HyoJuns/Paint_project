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

/*
 * @classname : group_new
 * @description : 메인 폼에서 밑에 나타내기 위한 위젯
 */
class group_new : public QGroupBox
{
    Q_OBJECT

public:
    // 생성자
    explicit group_new(QWidget *parent = nullptr);
    // 소멸자
    ~group_new();

    // 너비, 높이, 이름 반환
    QString get_width() const {return width_text;}
    QString get_height() const {return height_text;}
    QString get_name() const {return name_text;}
private slots:
    // Make Button OnClick() Event
    void on_btn_make_clicked(); // 만들기 버튼
    // Close Button OnClick() Event
    void on_btn_close_clicked(); // 닫기 버튼
signals:
    void sigClicked(); // 클릭 시그널
    void sigCancelClicked(); // 취소 시그널
private:
    Ui::group_new *ui;
    QString width_text;     // 너비
    QString height_text;    // 높이
    QString name_text;      // 이름


};

#endif // GROUP_NEW_H
