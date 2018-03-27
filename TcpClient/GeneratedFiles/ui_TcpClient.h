/********************************************************************************
** Form generated from reading UI file 'TcpClient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_TcpClientClass
{
public:

    void setupUi(QDialog *TcpClientClass)
    {
        if (TcpClientClass->objectName().isEmpty())
            TcpClientClass->setObjectName(QStringLiteral("TcpClientClass"));
        TcpClientClass->resize(600, 400);

        retranslateUi(TcpClientClass);

        QMetaObject::connectSlotsByName(TcpClientClass);
    } // setupUi

    void retranslateUi(QDialog *TcpClientClass)
    {
        TcpClientClass->setWindowTitle(QApplication::translate("TcpClientClass", "TcpClient", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TcpClientClass: public Ui_TcpClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
