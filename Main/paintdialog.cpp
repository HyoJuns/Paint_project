#include "paintdialog.h"
#include "ui_paintdialog.h"


using namespace std;

PaintDialog::PaintDialog(QWidget *parent) : QDialog(parent),  ui(new Ui::PaintDialog)
{
    ui->setupUi(this);
}

PaintDialog::~PaintDialog()
{
    delete ui;
}

// 만들기 버튼 Click Event
void PaintDialog::on_btn_make_clicked()
{
    // 문자에서 정수로 불러들일 때 문자열인 경우 false, 숫자 인경우 true
    bool trigger_width = false;
    bool trigger_height = false;

    // 텍스트에 입력된 값을 문자열로 불러들인다.
    width_string = ui->line_width->text();
    height_string = ui->line_height->text();
    name_string = ui->line_name->text();
    // 문자열이 비어있는 경우
    if(width_string.isEmpty() ||  height_string.isEmpty() || width_string.isNull() || height_string.isNull()  || name_string.isNull())
    {
        QMessageBox::warning(this, "입력오류","누락된 값이 포함되어 있습니다.");
        return;
    }

    // 정수로 변환
    width_int = width_string.toInt(&trigger_width);
    height_int = height_string.toInt(&trigger_height);

    // 정수 오류
    if(!trigger_width || !trigger_height)
    {
        QMessageBox::warning(this, "입력오류","입력값이 문자열로 되어 있습니다..");
        return;
    }

    // 확인 메세지
     int check =  QMessageBox::information(this, tr("확인"), "새로 생성하시겠습니까?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

     // Yes 누를 경우 main_form_page 이동
     if(check == QMessageBox::Yes)
     {
         cv::Scalar cvColor = cv::Scalar(255,255,255);
         page = new Main_Form_Page(this);
         cv::Mat image(width_int, height_int, CV_8UC3, cvColor);
        Image_Information_Class info (name_string.toStdString(), width_int, height_int,image);

        // 등록
        page->image_name_vector.push_back(info);

        // 현재 숨기기
         hide();

         // 화면 보여주기
        info.Image_Show();
        page->Refresh();
         page->show();
     }

}

// 닫기 버튼 Click Event
void PaintDialog::on_btn_close_clicked()
{
    exit(1);
}
