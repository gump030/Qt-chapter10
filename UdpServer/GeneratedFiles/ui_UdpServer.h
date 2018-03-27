/********************************************************************************
** Form generated from reading UI file 'UdpServer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPSERVER_H
#define UI_UDPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_UdpServerClass
{
public:

    void setupUi(QDialog *UdpServerClass)
    {
        if (UdpServerClass->objectName().isEmpty())
            UdpServerClass->setObjectName(QStringLiteral("UdpServerClass"));
        UdpServerClass->resize(600, 400);

        retranslateUi(UdpServerClass);

        QMetaObject::connectSlotsByName(UdpServerClass);
    } // setupUi

    void retranslateUi(QDialog *UdpServerClass)
    {
        UdpServerClass->setWindowTitle(QApplication::translate("UdpServerClass", "UdpServer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UdpServerClass: public Ui_UdpServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPSERVER_H
