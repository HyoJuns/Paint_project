/********************************************************************************
** Form generated from reading UI file 'group_new.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUP_NEW_H
#define UI_GROUP_NEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_group_new
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_width_text;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *line_height_text;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *line_name_text;
    QPushButton *btn_make;
    QPushButton *btn_close;

    void setupUi(QGroupBox *group_new)
    {
        if (group_new->objectName().isEmpty())
            group_new->setObjectName(QString::fromUtf8("group_new"));
        group_new->resize(491, 184);
        group_new->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(group_new);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 326, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        line_width_text = new QLineEdit(layoutWidget);
        line_width_text->setObjectName(QString::fromUtf8("line_width_text"));

        horizontalLayout->addWidget(line_width_text);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        line_height_text = new QLineEdit(layoutWidget);
        line_height_text->setObjectName(QString::fromUtf8("line_height_text"));

        horizontalLayout_3->addWidget(line_height_text);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        line_name_text = new QLineEdit(layoutWidget);
        line_name_text->setObjectName(QString::fromUtf8("line_name_text"));

        horizontalLayout_2->addWidget(line_name_text);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_make = new QPushButton(group_new);
        btn_make->setObjectName(QString::fromUtf8("btn_make"));
        btn_make->setGeometry(QRect(370, 60, 89, 25));
        btn_close = new QPushButton(group_new);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(370, 90, 89, 25));

        retranslateUi(group_new);

        QMetaObject::connectSlotsByName(group_new);
    } // setupUi

    void retranslateUi(QGroupBox *group_new)
    {
        group_new->setWindowTitle(QCoreApplication::translate("group_new", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("group_new", "\353\204\210\353\271\204 (Width) :", nullptr));
        label_3->setText(QCoreApplication::translate("group_new", "\353\206\222\354\235\264 (height) :", nullptr));
        label_2->setText(QCoreApplication::translate("group_new", "\354\235\264\353\246\204 (Name) :", nullptr));
        btn_make->setText(QCoreApplication::translate("group_new", "\353\247\214\353\223\244\352\270\260", nullptr));
        btn_close->setText(QCoreApplication::translate("group_new", "\353\213\253\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class group_new: public Ui_group_new {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUP_NEW_H
