/********************************************************************************
** Form generated from reading UI file 'paintdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTDIALOG_H
#define UI_PAINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaintDialog
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *line_width;
    QLineEdit *line_height;
    QLineEdit *line_name;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_make;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_close;

    void setupUi(QDialog *PaintDialog)
    {
        if (PaintDialog->objectName().isEmpty())
            PaintDialog->setObjectName(QString::fromUtf8("PaintDialog"));
        PaintDialog->resize(655, 242);
        PaintDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 217, 199);\n"
"color: rgb(85, 92, 102);\n"
"font: 75 15pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234\";"));
        label = new QLabel(PaintDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 221, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(57, 107, 68);\n"
"font: 75 18pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\353\235\274\354\232\264\353\223\234\";"));
        label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(PaintDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 100, 178, 107));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_width = new QLineEdit(layoutWidget);
        line_width->setObjectName(QString::fromUtf8("line_width"));
        line_width->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);\n"
"border-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(line_width);

        line_height = new QLineEdit(layoutWidget);
        line_height->setObjectName(QString::fromUtf8("line_height"));
        line_height->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);\n"
"border-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(line_height);

        line_name = new QLineEdit(layoutWidget);
        line_name->setObjectName(QString::fromUtf8("line_name"));
        line_name->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);\n"
"border-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(line_name);

        layoutWidget1 = new QWidget(PaintDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 100, 131, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        layoutWidget2 = new QWidget(PaintDialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(420, 110, 191, 81));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_make = new QPushButton(layoutWidget2);
        btn_make->setObjectName(QString::fromUtf8("btn_make"));

        verticalLayout_3->addWidget(btn_make);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        btn_close = new QPushButton(layoutWidget2);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));

        verticalLayout_3->addWidget(btn_close);

        QWidget::setTabOrder(line_width, line_height);
        QWidget::setTabOrder(line_height, btn_make);
        QWidget::setTabOrder(btn_make, btn_close);

        retranslateUi(PaintDialog);

        QMetaObject::connectSlotsByName(PaintDialog);
    } // setupUi

    void retranslateUi(QDialog *PaintDialog)
    {
        PaintDialog->setWindowTitle(QCoreApplication::translate("PaintDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PaintDialog", "\354\203\210 \355\214\214\354\235\274 \353\247\214\353\223\244\352\270\260", nullptr));
        line_width->setText(QString());
        line_height->setText(QString());
        line_name->setText(QString());
        label_2->setText(QCoreApplication::translate("PaintDialog", "\353\204\210\353\271\204 [Width] :", nullptr));
        label_3->setText(QCoreApplication::translate("PaintDialog", "\353\206\222\354\235\264 [Height] :", nullptr));
        label_4->setText(QCoreApplication::translate("PaintDialog", "\354\235\264\353\246\204 [Name]", nullptr));
        btn_make->setText(QCoreApplication::translate("PaintDialog", "\353\247\214\353\223\244\352\270\260", nullptr));
        btn_close->setText(QCoreApplication::translate("PaintDialog", "\353\213\253\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaintDialog: public Ui_PaintDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTDIALOG_H
