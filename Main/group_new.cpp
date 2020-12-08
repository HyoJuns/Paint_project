#include "group_new.h"
#include "ui_group_new.h"

// 생성자
group_new::group_new(QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::group_new)
{
    ui->setupUi(this);
}
// 소멸자
group_new::~group_new()
{
    delete ui;
}
/*
 * 만들기 버튼을 눌렀을 때 너비,높이,이름이 지정된 이미지를 메인 폼에 생성해준다.
 */
void group_new::on_btn_make_clicked()
{
    // 텍스트에 입력된 값을 문자열로 불러들인다.
    width_text = ui->line_width_text->text();
    height_text = ui->line_height_text->text();
    name_text = ui->line_name_text->text();

    cout << "On_btn_make_cliked" << endl;

    // Connect 신호를 받기 위해 시그널 함수 전송
    emit sigClicked();
}

/*
 * 닫기 버튼을 누르면 이 위젯이 사라진다.
 */
void group_new::on_btn_close_clicked()
{
    // Connect 종료 신호를 받기 위해 시그널 함수 전송
    emit sigCancelClicked();
    // 폼을 닫는다.
    close();
}

