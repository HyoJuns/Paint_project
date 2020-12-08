#include "easylogo_dialog.h"
#include "ui_easylogo_dialog.h"

// 생성자
easylogo_Dialog::easylogo_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::easylogo_Dialog)
{
    ui->setupUi(this);
}

// 소멸자
easylogo_Dialog::~easylogo_Dialog()
{
    delete ui;
    delete[] page;
    delete[] info;
}

// 새파일 버튼 Click event
void easylogo_Dialog::on_btn_new_clicked()
{
     paintdialog = new PaintDialog(this);

     hide();
     paintdialog->show();
}

// 파일 열기 Click event
void easylogo_Dialog::on_btn_open_clicked()
{
    QString filter = "PNG file(*.png)";

    // 불러올 이미지를 여기에 넣을 변수
    cv::Mat file_Image_first;
    cv::Mat copy_Image;

    // 복사한 이미지 너비, 높이
    int copy_width;
    int copy_height;

    filePath = QFileDialog::getOpenFileName(this, "파일 열기", QDir::currentPath(),filter);
    fileName = filePath.section("/", -1);

    // QString -> string 변환
    stdstring = filePath.toStdString();


    //이미지 파일을 Alpha channel 까지 포함하여 읽는다.
    file_Image_first = cv::imread(stdstring, cv::IMREAD_UNCHANGED);

    // 불러온 이미지를 복사하여 변수에 대입
    copy_Image = file_Image_first.clone();

    // 복사한 이미지 너비 높이 대입
    copy_width = copy_Image.cols;
    copy_height = copy_Image.rows;

    // 해당 폼을 숨긴다.
    hide();

    // 타이틀 이름 설정
    cv::namedWindow(stdstring,cv::WINDOW_AUTOSIZE);

    // 윈도우 이동
    cv::moveWindow(stdstring,1000, 200);

    // 메인 폼에 값을 대입한다..
    page = new Main_Form_Page(this);
    info = new Image_Information_Class(stdstring,copy_width, copy_height, copy_Image);

    // 등록
    page->image_name_vector.push_back(*info);

    // 새로고침
    page->Refresh();

    // 메인 폼을 보여준다.
    page->show();


}
// GitHub 버튼
void easylogo_Dialog::on_btn_git_clicked()
{
    // 메세지박스 출력
    QMessageBox::information(this, "FireFox 여는중","https://github.com/HyoJuns/Paint_project" );
    // GitHub Page Web Show
    system("firefox  https://github.com/HyoJuns/Paint_project");
}
