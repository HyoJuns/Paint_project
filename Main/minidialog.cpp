#include "minidialog.h"
#include "ui_minidialog.h"

MiniDialog::MiniDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MiniDialog)
{
    ui->setupUi(this);
}

MiniDialog::~MiniDialog()
{
    delete ui;
}

void MiniDialog::on_btn_make_clicked()
{

}

void MiniDialog::on_btn_close_clicked()
{
    // 현재 숨기기
    close();
}
