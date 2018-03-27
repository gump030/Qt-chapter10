#pragma once

#include <QtWidgets/QWidget>
#include "ui_NetworkInformation.h"

class NetworkInformation : public QWidget
{
	Q_OBJECT

public:
	NetworkInformation(QWidget *parent = Q_NULLPTR);

private:
	Ui::NetworkInformationClass ui;
};
