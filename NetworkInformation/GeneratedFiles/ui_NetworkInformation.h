/********************************************************************************
** Form generated from reading UI file 'NetworkInformation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKINFORMATION_H
#define UI_NETWORKINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkInformationClass
{
public:

    void setupUi(QWidget *NetworkInformationClass)
    {
        if (NetworkInformationClass->objectName().isEmpty())
            NetworkInformationClass->setObjectName(QStringLiteral("NetworkInformationClass"));
        NetworkInformationClass->resize(600, 400);

        retranslateUi(NetworkInformationClass);

        QMetaObject::connectSlotsByName(NetworkInformationClass);
    } // setupUi

    void retranslateUi(QWidget *NetworkInformationClass)
    {
        NetworkInformationClass->setWindowTitle(QApplication::translate("NetworkInformationClass", "NetworkInformation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetworkInformationClass: public Ui_NetworkInformationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKINFORMATION_H
