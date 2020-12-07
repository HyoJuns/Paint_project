#include "group_new.h"
#include "ui_group_new.h"

group_new::group_new(QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::group_new)
{
    ui->setupUi(this);
}

group_new::~group_new()
{
    delete ui;
}

void group_new::on_btn_make_clicked()
{
    // 텍스트에 입력된 값을 문자열로 불러들인다.
    width_text = ui->line_width_text->text();
    height_text = ui->line_height_text->text();
    name_text = ui->line_name_text->text();

    cout << "On_btn_make_cliked" << endl;

    emit sigClicked();
}

void group_new::on_btn_close_clicked()
{
    emit sigCancelClicked();
    close();
}

