/********************************************************************************
** Form generated from reading UI file 'main_form_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_FORM_PAGE_H
#define UI_MAIN_FORM_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Form_Page
{
public:
    QAction *actionNew_File;
    QAction *actionOpen_File;
    QAction *actionSave_File;
    QAction *actionExit;
    QAction *filter_channel;
    QAction *filter_light;
    QAction *fliter_dark;
    QAction *fliter_reverse;
    QAction *filter_Sype;
    QAction *action;
    QWidget *centralwidget;
    QPushButton *btn_Draw;
    QPushButton *btn_eraser;
    QPushButton *btn_circle;
    QPushButton *btn_rect;
    QPushButton *btn_text;
    QListWidget *list_image;
    QTabWidget *tab_inspect;
    QWidget *tab_draw;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *slider_sizebrush;
    QLabel *lbl_sizebrush_value;
    QTextBrowser *textBrowser;
    QWidget *tab_eraser;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *slider_sizeeraser;
    QLabel *lbl_sizeeraser_value;
    QTextBrowser *textBrowser_2;
    QWidget *tab_diagram;
    QLabel *label_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QSlider *slider_sizerect;
    QLabel *lbl_sizerect_value;
    QTextBrowser *textBrowser_3;
    QWidget *tab_text;
    QLabel *lbl_string;
    QLineEdit *line_text;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QRadioButton *radio_1;
    QRadioButton *radio_7;
    QRadioButton *radio_2;
    QRadioButton *radio_8;
    QRadioButton *radio_3;
    QRadioButton *radio_9;
    QRadioButton *radio_4;
    QRadioButton *radio_5;
    QRadioButton *radio_6;
    QWidget *tab_movie;
    QPushButton *btn_origin;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QPushButton *btn_list_close;
    QPushButton *btn_color;
    QLabel *lbl_color;
    QPushButton *btn_fill;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuFilter;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Main_Form_Page)
    {
        if (Main_Form_Page->objectName().isEmpty())
            Main_Form_Page->setObjectName(QString::fromUtf8("Main_Form_Page"));
        Main_Form_Page->resize(800, 681);
        Main_Form_Page->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        actionNew_File = new QAction(Main_Form_Page);
        actionNew_File->setObjectName(QString::fromUtf8("actionNew_File"));
        actionNew_File->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/image/image/filenew_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_File->setIcon(icon);
        actionOpen_File = new QAction(Main_Form_Page);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionOpen_File->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/image/image/fileopen_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_File->setIcon(icon1);
        actionSave_File = new QAction(Main_Form_Page);
        actionSave_File->setObjectName(QString::fromUtf8("actionSave_File"));
        actionSave_File->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/image/image/filesave_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_File->setIcon(icon2);
        actionExit = new QAction(Main_Form_Page);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resource/image/image/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        filter_channel = new QAction(Main_Form_Page);
        filter_channel->setObjectName(QString::fromUtf8("filter_channel"));
        filter_channel->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resource/image/image/screen_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        filter_channel->setIcon(icon4);
        filter_light = new QAction(Main_Form_Page);
        filter_light->setObjectName(QString::fromUtf8("filter_light"));
        filter_light->setCheckable(true);
        filter_light->setIcon(icon4);
        fliter_dark = new QAction(Main_Form_Page);
        fliter_dark->setObjectName(QString::fromUtf8("fliter_dark"));
        fliter_dark->setCheckable(true);
        fliter_dark->setIcon(icon4);
        fliter_reverse = new QAction(Main_Form_Page);
        fliter_reverse->setObjectName(QString::fromUtf8("fliter_reverse"));
        fliter_reverse->setCheckable(true);
        fliter_reverse->setIcon(icon4);
        filter_Sype = new QAction(Main_Form_Page);
        filter_Sype->setObjectName(QString::fromUtf8("filter_Sype"));
        filter_Sype->setCheckable(true);
        filter_Sype->setIcon(icon4);
        action = new QAction(Main_Form_Page);
        action->setObjectName(QString::fromUtf8("action"));
        action->setCheckable(true);
        centralwidget = new QWidget(Main_Form_Page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_Draw = new QPushButton(centralwidget);
        btn_Draw->setObjectName(QString::fromUtf8("btn_Draw"));
        btn_Draw->setGeometry(QRect(30, 10, 60, 60));
        btn_Draw->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/image/brush_icon.png);"));
        btn_eraser = new QPushButton(centralwidget);
        btn_eraser->setObjectName(QString::fromUtf8("btn_eraser"));
        btn_eraser->setGeometry(QRect(100, 10, 60, 60));
        btn_eraser->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/image/eraser_icon.png);"));
        btn_circle = new QPushButton(centralwidget);
        btn_circle->setObjectName(QString::fromUtf8("btn_circle"));
        btn_circle->setGeometry(QRect(100, 80, 60, 60));
        btn_circle->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/image/Circle_icon.png);"));
        btn_rect = new QPushButton(centralwidget);
        btn_rect->setObjectName(QString::fromUtf8("btn_rect"));
        btn_rect->setGeometry(QRect(30, 80, 60, 60));
        btn_rect->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/image/rect_icon.png);"));
        btn_text = new QPushButton(centralwidget);
        btn_text->setObjectName(QString::fromUtf8("btn_text"));
        btn_text->setGeometry(QRect(30, 150, 60, 60));
        btn_text->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/image/text_icon.png);"));
        list_image = new QListWidget(centralwidget);
        list_image->setObjectName(QString::fromUtf8("list_image"));
        list_image->setGeometry(QRect(530, 10, 256, 321));
        list_image->setFrameShape(QFrame::Box);
        list_image->setFrameShadow(QFrame::Sunken);
        list_image->setLineWidth(2);
        list_image->setIconSize(QSize(15, 15));
        tab_inspect = new QTabWidget(centralwidget);
        tab_inspect->setObjectName(QString::fromUtf8("tab_inspect"));
        tab_inspect->setGeometry(QRect(190, 10, 321, 311));
        tab_inspect->setLayoutDirection(Qt::LeftToRight);
        tab_inspect->setTabPosition(QTabWidget::North);
        tab_inspect->setElideMode(Qt::ElideNone);
        tab_inspect->setUsesScrollButtons(true);
        tab_draw = new QWidget();
        tab_draw->setObjectName(QString::fromUtf8("tab_draw"));
        label = new QLabel(tab_draw);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 81, 17));
        layoutWidget = new QWidget(tab_draw);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 201, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        slider_sizebrush = new QSlider(layoutWidget);
        slider_sizebrush->setObjectName(QString::fromUtf8("slider_sizebrush"));
        slider_sizebrush->setMinimum(1);
        slider_sizebrush->setMaximum(100);
        slider_sizebrush->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider_sizebrush);

        lbl_sizebrush_value = new QLabel(layoutWidget);
        lbl_sizebrush_value->setObjectName(QString::fromUtf8("lbl_sizebrush_value"));

        horizontalLayout->addWidget(lbl_sizebrush_value);

        textBrowser = new QTextBrowser(tab_draw);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 90, 256, 192));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resource/image/image/brush_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_inspect->addTab(tab_draw, icon5, QString());
        tab_eraser = new QWidget();
        tab_eraser->setObjectName(QString::fromUtf8("tab_eraser"));
        label_2 = new QLabel(tab_eraser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 81, 17));
        layoutWidget_2 = new QWidget(tab_eraser);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 201, 19));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        slider_sizeeraser = new QSlider(layoutWidget_2);
        slider_sizeeraser->setObjectName(QString::fromUtf8("slider_sizeeraser"));
        slider_sizeeraser->setMinimum(1);
        slider_sizeeraser->setMaximum(100);
        slider_sizeeraser->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider_sizeeraser);

        lbl_sizeeraser_value = new QLabel(layoutWidget_2);
        lbl_sizeeraser_value->setObjectName(QString::fromUtf8("lbl_sizeeraser_value"));

        horizontalLayout_2->addWidget(lbl_sizeeraser_value);

        textBrowser_2 = new QTextBrowser(tab_eraser);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 90, 256, 192));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resource/image/image/eraser_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_inspect->addTab(tab_eraser, icon6, QString());
        tab_diagram = new QWidget();
        tab_diagram->setObjectName(QString::fromUtf8("tab_diagram"));
        label_3 = new QLabel(tab_diagram);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 231, 17));
        layoutWidget_3 = new QWidget(tab_diagram);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 201, 19));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        slider_sizerect = new QSlider(layoutWidget_3);
        slider_sizerect->setObjectName(QString::fromUtf8("slider_sizerect"));
        slider_sizerect->setMinimum(-1);
        slider_sizerect->setMaximum(100);
        slider_sizerect->setValue(-1);
        slider_sizerect->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider_sizerect);

        lbl_sizerect_value = new QLabel(layoutWidget_3);
        lbl_sizerect_value->setObjectName(QString::fromUtf8("lbl_sizerect_value"));

        horizontalLayout_3->addWidget(lbl_sizerect_value);

        textBrowser_3 = new QTextBrowser(tab_diagram);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(20, 80, 256, 192));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resource/image/image/rect_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_inspect->addTab(tab_diagram, icon7, QString());
        tab_text = new QWidget();
        tab_text->setObjectName(QString::fromUtf8("tab_text"));
        lbl_string = new QLabel(tab_text);
        lbl_string->setObjectName(QString::fromUtf8("lbl_string"));
        lbl_string->setGeometry(QRect(10, 10, 231, 17));
        line_text = new QLineEdit(tab_text);
        line_text->setObjectName(QString::fromUtf8("line_text"));
        line_text->setGeometry(QRect(10, 40, 291, 25));
        layoutWidget1 = new QWidget(tab_text);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 90, 245, 170));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        radio_1 = new QRadioButton(layoutWidget1);
        radio_1->setObjectName(QString::fromUtf8("radio_1"));
        radio_1->setChecked(true);
        radio_1->setAutoRepeat(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, radio_1);

        radio_7 = new QRadioButton(layoutWidget1);
        radio_7->setObjectName(QString::fromUtf8("radio_7"));
        radio_7->setChecked(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, radio_7);

        radio_2 = new QRadioButton(layoutWidget1);
        radio_2->setObjectName(QString::fromUtf8("radio_2"));
        radio_2->setChecked(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, radio_2);

        radio_8 = new QRadioButton(layoutWidget1);
        radio_8->setObjectName(QString::fromUtf8("radio_8"));
        radio_8->setChecked(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, radio_8);

        radio_3 = new QRadioButton(layoutWidget1);
        radio_3->setObjectName(QString::fromUtf8("radio_3"));
        radio_3->setChecked(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, radio_3);

        radio_9 = new QRadioButton(layoutWidget1);
        radio_9->setObjectName(QString::fromUtf8("radio_9"));
        radio_9->setChecked(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, radio_9);

        radio_4 = new QRadioButton(layoutWidget1);
        radio_4->setObjectName(QString::fromUtf8("radio_4"));
        radio_4->setChecked(false);

        formLayout->setWidget(3, QFormLayout::SpanningRole, radio_4);

        radio_5 = new QRadioButton(layoutWidget1);
        radio_5->setObjectName(QString::fromUtf8("radio_5"));
        radio_5->setChecked(false);

        formLayout->setWidget(4, QFormLayout::SpanningRole, radio_5);

        radio_6 = new QRadioButton(layoutWidget1);
        radio_6->setObjectName(QString::fromUtf8("radio_6"));
        radio_6->setChecked(false);

        formLayout->setWidget(5, QFormLayout::SpanningRole, radio_6);

        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resource/image/image/text_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_inspect->addTab(tab_text, icon8, QString());
        tab_movie = new QWidget();
        tab_movie->setObjectName(QString::fromUtf8("tab_movie"));
        btn_origin = new QPushButton(tab_movie);
        btn_origin->setObjectName(QString::fromUtf8("btn_origin"));
        btn_origin->setGeometry(QRect(40, 30, 141, 51));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resource/image/image/moive_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_inspect->addTab(tab_movie, icon9, QString());
        tab_inspect->setTabText(tab_inspect->indexOf(tab_movie), QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(50, 380, 721, 201));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        stackedWidget->setFrameShadow(QFrame::Sunken);
        stackedWidget->setLineWidth(3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        btn_list_close = new QPushButton(centralwidget);
        btn_list_close->setObjectName(QString::fromUtf8("btn_list_close"));
        btn_list_close->setGeometry(QRect(640, 340, 131, 31));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resource/image/image/trash_png.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btn_list_close->setIcon(icon10);
        btn_color = new QPushButton(centralwidget);
        btn_color->setObjectName(QString::fromUtf8("btn_color"));
        btn_color->setGeometry(QRect(30, 220, 61, 61));
        btn_color->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/image/paint_icon.png);"));
        lbl_color = new QLabel(centralwidget);
        lbl_color->setObjectName(QString::fromUtf8("lbl_color"));
        lbl_color->setGeometry(QRect(30, 290, 131, 17));
        btn_fill = new QPushButton(centralwidget);
        btn_fill->setObjectName(QString::fromUtf8("btn_fill"));
        btn_fill->setGeometry(QRect(100, 150, 60, 60));
        btn_fill->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/image/fill_icon.png);"));
        Main_Form_Page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main_Form_Page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setTearOffEnabled(false);
        menuFile->setSeparatorsCollapsible(false);
        menuFile->setToolTipsVisible(false);
        menuFilter = new QMenu(menubar);
        menuFilter->setObjectName(QString::fromUtf8("menuFilter"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Main_Form_Page->setMenuBar(menubar);
        statusbar = new QStatusBar(Main_Form_Page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Main_Form_Page->setStatusBar(statusbar);
        toolBar = new QToolBar(Main_Form_Page);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Main_Form_Page->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuFilter->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_File);
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionSave_File);
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFilter->addAction(filter_channel);
        menuFilter->addAction(filter_light);
        menuFilter->addAction(fliter_dark);
        menuFilter->addAction(fliter_reverse);
        menuFilter->addAction(filter_Sype);
        menuHelp->addAction(action);
        toolBar->addAction(actionNew_File);
        toolBar->addAction(actionOpen_File);
        toolBar->addAction(actionSave_File);

        retranslateUi(Main_Form_Page);

        tab_inspect->setCurrentIndex(4);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Main_Form_Page);
    } // setupUi

    void retranslateUi(QMainWindow *Main_Form_Page)
    {
        Main_Form_Page->setWindowTitle(QCoreApplication::translate("Main_Form_Page", "MainWindow", nullptr));
        actionNew_File->setText(QCoreApplication::translate("Main_Form_Page", "New File", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_File->setShortcut(QCoreApplication::translate("Main_Form_Page", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_File->setText(QCoreApplication::translate("Main_Form_Page", "Open File", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_File->setShortcut(QCoreApplication::translate("Main_Form_Page", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_File->setText(QCoreApplication::translate("Main_Form_Page", "Save File", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_File->setShortcut(QCoreApplication::translate("Main_Form_Page", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Main_Form_Page", "Exit", nullptr));
        filter_channel->setText(QCoreApplication::translate("Main_Form_Page", "\354\261\204\353\204\220 \353\266\204\353\246\254", nullptr));
#if QT_CONFIG(shortcut)
        filter_channel->setShortcut(QCoreApplication::translate("Main_Form_Page", "Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        filter_light->setText(QCoreApplication::translate("Main_Form_Page", "\354\230\201\354\203\201 \353\260\235\352\262\214", nullptr));
#if QT_CONFIG(shortcut)
        filter_light->setShortcut(QCoreApplication::translate("Main_Form_Page", "Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        fliter_dark->setText(QCoreApplication::translate("Main_Form_Page", "\354\230\201\354\203\271 \354\226\264\353\221\241\352\262\214", nullptr));
#if QT_CONFIG(shortcut)
        fliter_dark->setShortcut(QCoreApplication::translate("Main_Form_Page", "Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        fliter_reverse->setText(QCoreApplication::translate("Main_Form_Page", "\354\230\201\354\203\201 \353\260\230\354\240\204", nullptr));
#if QT_CONFIG(shortcut)
        fliter_reverse->setShortcut(QCoreApplication::translate("Main_Form_Page", "Shift+G", nullptr));
#endif // QT_CONFIG(shortcut)
        filter_Sype->setText(QCoreApplication::translate("Main_Form_Page", "\354\203\244\355\224\204\353\213\235", nullptr));
#if QT_CONFIG(shortcut)
        filter_Sype->setShortcut(QCoreApplication::translate("Main_Form_Page", "Shift+H", nullptr));
#endif // QT_CONFIG(shortcut)
        action->setText(QCoreApplication::translate("Main_Form_Page", "Version", nullptr));
        btn_Draw->setText(QString());
        btn_eraser->setText(QString());
        btn_circle->setText(QString());
        btn_rect->setText(QString());
        btn_text->setText(QString());
        label->setText(QCoreApplication::translate("Main_Form_Page", "\354\204\240  \355\201\254\352\270\260", nullptr));
        lbl_sizebrush_value->setText(QCoreApplication::translate("Main_Form_Page", "1", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Main_Form_Page", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\353\254\264\354\241\260\352\261\264 \353\270\214\353\237\254\354\211\254 \353\262\204\355\212\274\354\235\200 \353\210\214\353\237\254\354\243\274\354\204\270\354\232\224.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">List \353\252\251\353\241\235\354\227\220 \354\236\210\353\212\224 \353\246\254\354\212\244\355\212\270 \352\260\222\354\235\204 \353\215\224\353\270\224\355\201\264\353\246\255 \353\210\204\353\245\264\353\251\264 \355\231\224\353\251\264\354\235\264 \353\202\230\354"
                        "\230\250\353\213\244.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\355\231\224\353\251\264\354\235\264 \353\202\230\354\230\244\353\251\264 \354\231\274\354\252\275 \353\247\210\354\232\260\354\212\244 \355\201\264\353\246\255\354\234\274\353\241\234 \353\270\214\353\237\254\354\211\254\353\245\274 \354\271\240\355\225\240 \354\210\230 \354\236\210\353\213\244.</p></body></html>", nullptr));
        tab_inspect->setTabText(tab_inspect->indexOf(tab_draw), QCoreApplication::translate("Main_Form_Page", "\352\267\270\353\246\254\352\270\260", nullptr));
        label_2->setText(QCoreApplication::translate("Main_Form_Page", "\354\202\254\354\235\264\354\246\210 \355\201\254\352\270\260", nullptr));
        lbl_sizeeraser_value->setText(QCoreApplication::translate("Main_Form_Page", "1", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Main_Form_Page", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\355\235\260\354\203\211\354\234\274\353\241\234 \354\204\244\354\240\225\353\220\230\354\226\264 \354\236\210\354\234\274\353\251\260, \352\267\270\353\246\274\353\217\204 \355\225\250\352\273\230 \354\247\200\354\233\200</p></body></html>", nullptr));
        tab_inspect->setTabText(tab_inspect->indexOf(tab_eraser), QCoreApplication::translate("Main_Form_Page", "\354\247\200\354\232\260\352\260\234", nullptr));
        label_3->setText(QCoreApplication::translate("Main_Form_Page", "\354\204\240 \355\201\254\352\270\260 (-1 \354\235\200 \354\261\204\354\232\260\352\270\260)", nullptr));
        lbl_sizerect_value->setText(QCoreApplication::translate("Main_Form_Page", "-1", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("Main_Form_Page", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-1\354\235\200 \354\261\204\354\232\260\352\270\260, 1 \353\266\200\355\204\260\353\212\224 \354\204\240 \353\221\220\352\273\230\354\235\264\353\213\244.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\353\247\210\354\232\260\354\212\244 \355\225\234\353\262\210 \355\201\264\353\246\255 \355\225\230\352\263\240 \353\230\220 \355\225\234\353\262\210 \355\201\264\353\246\255\355\225\230\353\251\264 \354\203\235\354\204\261\353\220\234\353\213\244.</p>\n"
"<p style=\" margin-top:0px; m"
                        "argin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\354\233\220\355\230\225\353\217\204 \353\247\210\354\260\254\352\260\200\354\247\200\354\235\264\353\213\244. </p></body></html>", nullptr));
        tab_inspect->setTabText(tab_inspect->indexOf(tab_diagram), QCoreApplication::translate("Main_Form_Page", "\353\217\204\355\230\225", nullptr));
        lbl_string->setText(QCoreApplication::translate("Main_Form_Page", "\353\254\270\354\236\220\354\227\264 \354\236\205\353\240\245", nullptr));
        line_text->setText(QCoreApplication::translate("Main_Form_Page", "hello", nullptr));
        radio_1->setText(QCoreApplication::translate("Main_Form_Page", "SIMPLEX", nullptr));
        radio_7->setText(QCoreApplication::translate("Main_Form_Page", "SCRIPT_SIMPLEX", nullptr));
        radio_2->setText(QCoreApplication::translate("Main_Form_Page", "PLAIN", nullptr));
        radio_8->setText(QCoreApplication::translate("Main_Form_Page", "SCRIPT_COMPLEX", nullptr));
        radio_3->setText(QCoreApplication::translate("Main_Form_Page", "DUPLEX", nullptr));
        radio_9->setText(QCoreApplication::translate("Main_Form_Page", "ITALIC", nullptr));
        radio_4->setText(QCoreApplication::translate("Main_Form_Page", "COMPLEX", nullptr));
        radio_5->setText(QCoreApplication::translate("Main_Form_Page", "TRIPLEX", nullptr));
        radio_6->setText(QCoreApplication::translate("Main_Form_Page", "COMPLEX_SMALL", nullptr));
        tab_inspect->setTabText(tab_inspect->indexOf(tab_text), QCoreApplication::translate("Main_Form_Page", "\353\254\270\354\236\220\354\227\264", nullptr));
        btn_origin->setText(QCoreApplication::translate("Main_Form_Page", "\354\233\220\353\263\270 ", nullptr));
        btn_list_close->setText(QCoreApplication::translate("Main_Form_Page", "\353\246\254\354\212\244\355\212\270 (\353\213\253\352\270\260)", nullptr));
        btn_color->setText(QString());
        lbl_color->setText(QCoreApplication::translate("Main_Form_Page", "\354\203\211\354\203\201\354\275\224\353\223\234 : ", nullptr));
        btn_fill->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("Main_Form_Page", "File", nullptr));
        menuFilter->setTitle(QCoreApplication::translate("Main_Form_Page", "Filter", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Main_Form_Page", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Main_Form_Page", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_Form_Page: public Ui_Main_Form_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_FORM_PAGE_H
