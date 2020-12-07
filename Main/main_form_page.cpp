#include "main_form_page.h"
#include "ui_main_form_page.h"
bool SingleTon_Paint::destroyed = false;
SingleTon_Paint* SingleTon_Paint::psing = 0;

Main_Form_Page::Main_Form_Page(QWidget *parent) :QMainWindow(parent),    ui(new Ui::Main_Form_Page)
{

    ui->setupUi(this);
     ui->stackedWidget->addWidget(&_gr_info);

     ui->list_image->setCurrentRow(0);
    connectList();

}



Main_Form_Page::~Main_Form_Page()
{
    delete ui;
}

/*
 *  연결 리스트
 */
void Main_Form_Page::connectList()
{
    // group_new Form과 신호 연결
    connect(&_gr_info,  SIGNAL(sigClicked()), this, SLOT(slot_new_file()));
    connect(&_gr_info,  SIGNAL(sigCancelClicked()), this, SLOT(slot_close()));

    // 드로우 텝 신호 연결
    connect(ui->slider_sizebrush, &QSlider::valueChanged, this, [=](){
        int value =  ui->slider_sizebrush->value();
        ui->lbl_sizebrush_value->setText(QString::number(value));
        SingleTon_Paint::getInstance().Set_Brush_Size(value);
    });

    // 드로우 탭 컬러 다이어리 신호 연결
    connect(ui->btn_color, &QPushButton::clicked, this, [=](){
        // 컬러 다이어리
        QColor brush_color = QColorDialog::getColor(Qt::black, this, "Choose Color");

        if(brush_color .isValid())
        {
            ui->lbl_color->setText(brush_color.name());
            SingleTon_Paint::getInstance().Set_Brush_Color(brush_color);

            cout << "Color : " << QcolorToScalar(brush_color) << endl;
        }
    });

    // 지우개 탭 신호 열결
    connect(ui->slider_sizeeraser, &QSlider::valueChanged, this, [=](){
        int value = ui->slider_sizeeraser->value();
        ui->lbl_sizeeraser_value->setText(QString::number(value));
        SingleTon_Paint::getInstance().Set_Eraser_Size(value);
    });

    // 도형 탭 신호 연결
    connect(ui->slider_sizerect, &QSlider::valueChanged, this, [=](){
        int value = ui->slider_sizerect->value();
        ui->lbl_sizerect_value->setText(QString::number(value));
        SingleTon_Paint::getInstance().Set_Circle_Size(value);
        SingleTon_Paint::getInstance().Set_Rect_Size(value);
    });

    // 텍스트 탭 신호 연결
    connect(ui->line_text, &QLineEdit::textChanged, this, [=](){
        SingleTon_Paint::getInstance().Set_Text(ui->line_text->text());
    });



}

/*
 *  리스트에 추가할 목적으로 새로고침 형태
 */
void Main_Form_Page::Refresh()
{
    int size = image_name_vector.size();
   QString n;

   // 초기화
   ui->list_image->clear();

    for(int i = 0; i < size; i++)
    {
        n.clear();

        // 대입
        n = tr(image_name_vector[i].get_image_name().data());
        ui->list_image->addItem(n);
    }


}
/*
 *  리스트에 있는 아이템을 클릭할 시
 */
void Main_Form_Page::on_list_image_itemClicked(QListWidgetItem *item)
{
    cout <<item->text().toStdString() << endl;

   vector<Image_Information_Class>::iterator it;

   // 반복자를 이용하여 검색
   for(it=image_name_vector.begin(); it != image_name_vector.end(); it++)
   {
        if(item->text().toStdString() == it->get_image_name())
        {
            cout << "Find Item [" << it->get_image_name() << "]" << endl;
            mec.SettingInfoClass(*it, false);
            break;
        }
   }



}

// 메뉴 - 새파일
void Main_Form_Page::on_actionNew_File_triggered()
{
    if(!new_count )
    {
        // 추가
        //ui->tab_inspect->addTab(new group_new(), QString("New Tab"));


         ui->stackedWidget->insertWidget(1, &_gr_info);
        ui->stackedWidget->setCurrentIndex(1);

        cout << "New File Button Trigger" << endl;
        // 텝 창 현재 위치 이동
       // ui->tab_inspect->setCurrentIndex(ui->tab_inspect->count() - 1);
        new_count = true;
    }



    //open_minidialog();
}

// 메뉴 - 열기
void Main_Form_Page::on_actionOpen_File_triggered()
{
    cout << "Open File Button Trigger" << endl;

    QString filter = "PNG file(*.png)";
    QString filePath;
    QString fileName;
    string stdstring;
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


    // 타이틀 이름 설정
    cv::namedWindow(stdstring,cv::WINDOW_AUTOSIZE);

    // 윈도우 이동
    cv::moveWindow(stdstring,1000, 200);

    // 메인 폼에 값을 대입한다..
    Image_Information_Class temp(stdstring, copy_width, copy_height, copy_Image, file_Image_first);

    // 등록
    image_name_vector.push_back(temp);

    // 새로고침
    Refresh();

}

// 메뉴 - 저장
void Main_Form_Page::on_actionSave_File_triggered()
{
    cout << "Save " << endl;
    try {
        int list_index = ui->list_image->currentRow();

        cout << "Save Index : " << list_index << endl;
        //Image_Information_Class info = image_name_vector[list_index];
        cv::Mat image =image_name_vector[list_index].get_image_mat();
        CV_Assert(image.data); // 영상 파일 예외처리

        // PNG 설정
        std::vector<int> params_png;

        // 압축레벨 설정
        params_png.push_back(cv::IMWRITE_PNG_COMPRESSION);
        params_png.push_back(5); // 압축레벨 0 ~ 9 중 5

        QString msg;

        string name;
        name.append("Image [").append(to_string(list_index)).append("]");
        image_name_vector[list_index].Set_Short_name(name);


        msg.sprintf("/media/sf_UbuntuShare/project_20145130/Paint_project/output/image/%s.png", image_name_vector[list_index].get_short_image_name().c_str());

        // 저장
        cv::imwrite(msg.toStdString(), image, params_png);
        cv::imwrite("/media/sf_UbuntuShare/project_20145130/Paint_project/output/image/origin.png", image_name_vector[list_index].get_origin_image_mat(), params_png);

        QMessageBox::information(this, "Complete",msg);
    }  catch (cv::Exception &e) {
        cout << "Exception[] " << e.code << " ]  " << e.what() << endl;
    }

}
// 메뉴 - 종료
void Main_Form_Page::on_actionExit_triggered()
{
    exit(1);
}

//Slot동
void Main_Form_Page::onMakeImage(Image_Information_Class _info)
{
    image_name_vector.push_back(_info);
}

void Main_Form_Page::onRemoveImage(int  _index)
{
    image_name_vector.erase(image_name_vector.begin() + (_index - 1));
}

void Main_Form_Page::slot_new_file()
{
    bool flag_width, flag_height;

    // 연결로 받은 데이터를 대입
    int _width = _gr_info.get_width().toInt(&flag_width);
    int _height = _gr_info.get_height().toInt(&flag_height);

    // Debug
    cout << "Slot New File Function" << endl;
    cout << "Width : " << _gr_info.get_width().toStdString() << endl;
    cout << "height : " << _gr_info.get_height().toStdString() << endl;
    cout << "name : " << _gr_info.get_name().toStdString() << endl;

    // 조건
    if(!flag_width || !flag_height )
    {
        QMessageBox::warning(this, "입력오류","정수를 입력하세요.");
        return;
    }
    // 문자열이 비어있는 경우
    if( _gr_info.get_width().isEmpty() ||  _gr_info.get_height().isEmpty() ||  _gr_info.get_width().isNull() || _gr_info.get_height().isNull()  ||  _gr_info.get_name().isNull())
    {
        QMessageBox::warning(this, "입력오류","누락된 값이 포함되어 있습니다.");
        return;
    }

    // 확인 메세지
     int check =  QMessageBox::information(this, tr("확인"), "새로 생성하시겠습니까?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
     // Yes 누를 경우 main_form_page 이동
     if(check == QMessageBox::Yes)
     {
          cv::Scalar cvColor = cv::Scalar(255,255,255);
          cv::Mat image(_width, _height, CV_8UC3, cvColor);
          Image_Information_Class info (_gr_info.get_name().toStdString(), _width, _height, image);

          // 등록
          image_name_vector.push_back(info);

          // 새로고침
          Refresh();

          new_count = false;

     }
}
void Main_Form_Page::slot_close(){
    new_count = false;
}

/*
 *  더블클릭
 */
void Main_Form_Page::on_list_image_itemDoubleClicked(QListWidgetItem *item)
{
    cout <<"Double Click : " << item->text().toStdString() << endl;
   vector<Image_Information_Class>::iterator it;

   // 반복자를 이용하여 검색
   for(it=image_name_vector.begin(); it != image_name_vector.end(); it++)
   {
        if(item->text().toStdString() == it->get_image_name())
        {
            cout << "Find Item [" << it->get_image_name() << "]" << endl;
            mec.SettingInfoClass(*it,true);

            break;
        }
   }


}

/*
 * 브러쉬 클릭
 */
void Main_Form_Page::on_btn_Draw_clicked()
{
    // 드로우 변경릭
   // choice_btn = SELECT_BUTTON_DRAW;
    SingleTon_Paint::getInstance().Set_Switch_Mode(SELECT_BUTTON_DRAW);
    cout << "DRAW Choice" << endl;
}

/*
 * 브러쉬 색상 클릭
 */
void Main_Form_Page::on_btn_color_clicked()
{
    cout << "Color Change Choice" << endl;
}

/*
 * 지우개 클릭
 */
void Main_Form_Page::on_btn_eraser_clicked()
{
    SingleTon_Paint::getInstance().Set_Switch_Mode(SELECT_BUTTON_ERASER);
    cout << "Eraser Choice" << endl;
}

/*릭
 * 사각형 클릭
 */
void Main_Form_Page::on_btn_rect_clicked()
{
    SingleTon_Paint::getInstance().Set_Switch_Mode(SELECT_BUTTON_RECT);
    cout << "RECT Choice" << endl;
}

/*
 * 동그라미 클릭
 */
void Main_Form_Page::on_btn_circle_clicked()
{
    SingleTon_Paint::getInstance().Set_Switch_Mode(SELECT_BUTTON_CIRCLE);
    cout << "CIRCLE Choice" << endl;
}


/*
 * 텍스트 클릭
 */
void Main_Form_Page::on_btn_text_clicked()
{
    SingleTon_Paint::getInstance().Set_Switch_Mode(SELECT_BUTTON_TEXT);
    cout << "TEXT Choice" << endl;
}

// 문자열 폰트 변경
void Main_Form_Page::on_radio_1_clicked()
{
     SingleTon_Paint::getInstance().Set_Font_Mode(SELECT_FONT_NORMAL);
     cout << "Font : Normal" << endl;
}

// PLAIN
void Main_Form_Page::on_radio_2_clicked()
{
    SingleTon_Paint::getInstance().Set_Font_Mode(SELECT_FONT_PLAIN);
    cout << "Font : Plain" << endl;
}
// Duplex
void Main_Form_Page::on_radio_3_clicked()
{
    SingleTon_Paint::getInstance().Set_Font_Mode(SELECT_FONT_DUPLEX);
    cout << "Font : Duplex" << endl;
}
// complex
void Main_Form_Page::on_radio_4_clicked()
{
    SingleTon_Paint::getInstance().Set_Font_Mode(SELECT_FONT_COMPLEX);
    cout << "Font : Complex" << endl;
}
// TRIP
void Main_Form_Page::on_radio_5_clicked()
{
    SingleTon_Paint::getInstance().Set_Font_Mode(SELECT_FONT_TRIPLEX);
    cout << "Font : TRIPLEX" << endl;
}
// Complex small
void Main_Form_Page::on_radio_6_clicked()
{
    SingleTon_Paint::getInstance().Set_Font_Mode(SELECT_FONT_COMPLEX_SMALL);
    cout << "Font : Complex small" << endl;
}
// Script simplex
void Main_Form_Page::on_radio_7_clicked()
{
    SingleTon_Paint::getInstance().Set_Font_Mode(SELECT_FONT_SCRIPT_SIMPLEX);
    cout << "Font : SCRIPT SIMPLEX" << endl;
}
// SCRIPT_COMPLEX
void Main_Form_Page::on_radio_8_clicked()
{
    SingleTon_Paint::getInstance().Set_Font_Mode(SELECT_FONT_SCRIPT_COMPLEX);
    cout << "Font : SCRIPT COMPLEX" << endl;
}
// ITALIC
void Main_Form_Page::on_radio_9_clicked()
{
    SingleTon_Paint::getInstance().Set_Font_Mode(SELECT_FONT_ITALIC);
    cout << "Font : ITALIC" << endl;
}

// 채우기 버튼 이벤트
void Main_Form_Page::on_btn_fill_clicked()
{
     int list_index = ui->list_image->currentRow();
     int _width =  image_name_vector[list_index].get_image_width();
     int _height =  image_name_vector[list_index].get_image_height();
    string name =  image_name_vector[list_index].get_image_name();
    QColor _tmp =  SingleTon_Paint::getInstance().Get_Brush_Color();
    cv::Scalar color = QcolorToScalar(_tmp);
    cv::Mat m (_width, _height, CV_8UC3, color);
    cv::imshow(name, m);

}

void Main_Form_Page::on_btn_list_close_clicked()
{
    int list_index = ui->list_image->currentRow();

    string name =  image_name_vector[list_index].get_image_name();
    image_name_vector.erase(image_name_vector.begin() + list_index); // Delete
    cv::destroyWindow(name);
    ui->list_image->takeItem(list_index);
}

// 채널 분리
void Main_Form_Page::on_filter_channel_triggered()
{
    if(ui->list_image->currentRow() < 0)
    {
        return;
    }

    int list_index = ui->list_image->currentRow();

    // 이미지 불러오기
    cv::Mat image = image_name_vector[list_index].get_image_mat();
    CV_Assert(image.data);

    // PNG 설정
    std::vector<int> params_png;

    // 압축레벨 설정
    params_png.push_back(cv::IMWRITE_PNG_COMPRESSION);
    params_png.push_back(5); // 압축레벨 0 ~ 9 중 5

    // 단일 3채널
    cv::Mat channel[3];
    cv::split(image, channel); // 3개 영상 분리

    cv::destroyAllWindows();

    cv::imshow("원본", image);
    cv::imshow("Blue 채널", channel[0]);
    cv::imshow("green 채널", channel[1]);
    cv::imshow("red 채널", channel[2]);

    cv::imwrite("/media/sf_UbuntuShare/project_20145130/Paint_project/output/image/Channel_BLUE.png", channel[0], params_png);
    cv::imwrite("/media/sf_UbuntuShare/project_20145130/Paint_project/output/image/Channel_GREEN.png", channel[1], params_png);
    cv::imwrite("/media/sf_UbuntuShare/project_20145130/Paint_project/output/image/Channel_RED.png", channel[2], params_png);

    QMessageBox::information(this, "채널 분리완료", "저장되었습니다.");
    cv::waitKey(0);

}
// 영상 밝게
void Main_Form_Page::on_filter_light_triggered()
{
    QMessageBox::warning(this, "경고","이 기능은 불러온 파일만 가능합니다. ");
    if(ui->list_image->currentRow() < 0)
    {
        return;
    }

    int list_index = ui->list_image->currentRow();

    cv::Mat image= cv::imread(image_name_vector[list_index].get_image_name(), cv::IMREAD_GRAYSCALE); // 이미지 가져오기
    CV_Assert(!image.empty());
    cv::Mat dst(image.size(), image.type());
    for(int i = 0 ; i < image.rows; i++)
    {
        for(int j = 0 ; j < image.cols; j++)
        {
           dst.at<uchar>(i, j) = cv::saturate_cast<uchar>( image.at<uchar>(i,j) + 100); // 영상 밝게 하기 255 넘지 못하게 saturate_cast 사용
        }
    }

    // 밝기 영상 설정
    image_name_vector[list_index].Set_Met(dst);

    cv::destroyWindow(image_name_vector[list_index].get_image_name());
    image_name_vector[list_index].Image_Show();

}
/*
 * 어둡게
 */
void Main_Form_Page::on_fliter_dark_triggered()
{
    QMessageBox::warning(this, "경고","이 기능은 불러온 파일만 가능합니다. ");
    if(ui->list_image->currentRow() < 0)
    {
        return;
    }

    int list_index = ui->list_image->currentRow();

    cv::Mat image= cv::imread(image_name_vector[list_index].get_image_name(), cv::IMREAD_GRAYSCALE); // 이미지 가져오기
    CV_Assert(!image.empty());
    cv::Mat image_dark = image - 100; // 어둡ㄱ


    image_name_vector[list_index].Set_Met(image_dark);

    cv::destroyWindow(image_name_vector[list_index].get_image_name());
    image_name_vector[list_index].Image_Show();
}

/*
 * 반전
 */
void Main_Form_Page::on_fliter_reverse_triggered()
{
    QMessageBox::warning(this, "경고","이 기능은 불러온 파일만 가능합니다. ");
    if(ui->list_image->currentRow() < 0)
    {
        return;
    }

    int list_index = ui->list_image->currentRow();

    cv::Mat image= cv::imread(image_name_vector[list_index].get_image_name(), cv::IMREAD_GRAYSCALE); // 이미지 가져오기
    CV_Assert(!image.empty());
    cv::Mat dst(image.size(), image.type());
    for(int i = 0 ; i < image.rows; i++)
    {
        for(int j = 0 ; j < image.cols; j++)
        {
            dst.at<uchar>(i, j) = 255 - image.at<uchar>(i,j); // 반전
        }
    }

    image_name_vector[list_index].Set_Met(dst);

    cv::destroyWindow(image_name_vector[list_index].get_image_name());
    image_name_vector[list_index].Image_Show();
}
// 회선
void Main_Form_Page::filter(cv::Mat img, cv::Mat& dst, cv::Mat mask)
{
    using namespace cv;

    dst = Mat(img.size(), CV_32F, Scalar(0)); // 회선 결과 저장 행렬
    Point h_m = mask.size() / 2;                            // 마스크 중심 좌표

    for(int i = h_m.y; i<img.rows - h_m.y; i++)
    {
        for(int j = h_m.x; j < img.cols -h_m.x; j++)
        {
            float sum = 0;
            for(int u = 0 ; u < mask.rows; u++)
            {
                for(int v = 0 ; v < mask.cols; v++)
                {
                    int y = i + u - h_m.y;
                    int x = j + v - h_m.x;
                    sum += mask.at<float>(u,v) * img.at<uchar>(y,x); // 회선 수식
                }
            }
            dst.at<float>(i, j) = sum; // 회선 누적값 출력화소 저장
        }
    }
}

/*
 * 샤프닝
 */
void Main_Form_Page::on_action_triggered()
{
    QMessageBox::warning(this, "경고","이 기능은 불러온 파일만 가능합니다. ");
    if(ui->list_image->currentRow() < 0)
    {
        return;
    }

    int list_index = ui->list_image->currentRow();

    cv::Mat image= cv::imread(image_name_vector[list_index].get_image_name(), cv::IMREAD_GRAYSCALE); // 이미지 가져오기
    CV_Assert(!image.empty());

    // 샤프닝 마스크 원소 지정
    float data1[] = {
       -1, -1, -1,
        -1, 9, -1,
        -1, -1, -1,
    };

    cv::Mat mask1(3,3, CV_32F, data1); // 마스크 행렬
    cv::Mat sharpen;

    filter(image, sharpen, mask1); // 회선 수행

    sharpen.convertTo(sharpen, CV_8U); // 자료형 전환

    image_name_vector[list_index].Set_Met(sharpen);

    cv::destroyWindow(image_name_vector[list_index].get_image_name());
    image_name_vector[list_index].Image_Show();
}
