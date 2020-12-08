/********************************************************************************
** Form generated from reading UI file 'easylogo_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASYLOGO_DIALOG_H
#define UI_EASYLOGO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_easylogo_Dialog
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_new;
    QPushButton *btn_open;
    QLabel *label_2;
    QPushButton *btn_git;

    void setupUi(QDialog *easylogo_Dialog)
    {
        if (easylogo_Dialog->objectName().isEmpty())
            easylogo_Dialog->setObjectName(QString::fromUtf8("easylogo_Dialog"));
        easylogo_Dialog->resize(576, 500);
        QFont font;
        font.setFamily(QString::fromUtf8("\353\202\230\353\210\224\353\252\205\354\241\260"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        easylogo_Dialog->setFont(font);
        easylogo_Dialog->setWindowTitle(QString::fromUtf8("Logo"));
        easylogo_Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));
        label = new QLabel(easylogo_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, -20, 531, 490));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/image/image/TitleFile.png")));
        label->setScaledContents(true);
        layoutWidget = new QWidget(easylogo_Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 440, 541, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_new = new QPushButton(layoutWidget);
        btn_new->setObjectName(QString::fromUtf8("btn_new"));
        QPalette palette;
        QBrush brush(QColor(211, 215, 207, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btn_new->setPalette(palette);

        horizontalLayout->addWidget(btn_new);

        btn_open = new QPushButton(layoutWidget);
        btn_open->setObjectName(QString::fromUtf8("btn_open"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btn_open->setPalette(palette1);

        horizontalLayout->addWidget(btn_open);

        label_2 = new QLabel(easylogo_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 20, 281, 61));
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        btn_git = new QPushButton(easylogo_Dialog);
        btn_git->setObjectName(QString::fromUtf8("btn_git"));
        btn_git->setGeometry(QRect(220, 330, 121, 41));
        btn_git->setAutoFillBackground(false);
        btn_git->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(206, 92, 0);\n"
"font: 75 15pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234\";"));

        retranslateUi(easylogo_Dialog);

        QMetaObject::connectSlotsByName(easylogo_Dialog);
    } // setupUi

    void retranslateUi(QDialog *easylogo_Dialog)
    {
        label->setText(QString());
        btn_new->setText(QCoreApplication::translate("easylogo_Dialog", "\354\203\210 \355\214\214\354\235\274", nullptr));
        btn_open->setText(QCoreApplication::translate("easylogo_Dialog", "\355\214\214\354\235\274 \354\227\264\352\270\260", nullptr));
        label_2->setText(QCoreApplication::translate("easylogo_Dialog", "20145130 \353\260\225\355\232\250\354\244\200 ", nullptr));
        btn_git->setText(QCoreApplication::translate("easylogo_Dialog", "GitHub", nullptr));
        (void)easylogo_Dialog;
    } // retranslateUi

};

namespace Ui {
    class easylogo_Dialog: public Ui_easylogo_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASYLOGO_DIALOG_H
