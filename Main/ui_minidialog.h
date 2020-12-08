/********************************************************************************
** Form generated from reading UI file 'minidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIDIALOG_H
#define UI_MINIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MiniDialog
{
public:

    void setupUi(QDialog *MiniDialog)
    {
        if (MiniDialog->objectName().isEmpty())
            MiniDialog->setObjectName(QString::fromUtf8("MiniDialog"));
        MiniDialog->resize(464, 172);
        MiniDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(MiniDialog);

        QMetaObject::connectSlotsByName(MiniDialog);
    } // setupUi

    void retranslateUi(QDialog *MiniDialog)
    {
        MiniDialog->setWindowTitle(QCoreApplication::translate("MiniDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniDialog: public Ui_MiniDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIDIALOG_H
