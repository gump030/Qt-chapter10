/********************************************************************************
** Form generated from reading UI file 'TcpServer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_TcpServerClass
{
public:

    void setupUi(QDialog *TcpServerClass)
    {
        if (TcpServerClass->objectName().isEmpty())
            TcpServerClass->setObjectName(QStringLiteral("TcpServerClass"));
        TcpServerClass->resize(600, 400);

        retranslateUi(TcpServerClass);

        QMetaObject::connectSlotsByName(TcpServerClass);
    } // setupUi

    void retranslateUi(QDialog *TcpServerClass)
    {
        TcpServerClass->setWindowTitle(QApplication::translate("TcpServerClass", "TcpServer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TcpServerClass: public Ui_TcpServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
