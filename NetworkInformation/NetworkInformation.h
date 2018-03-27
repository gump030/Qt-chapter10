#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QWidget>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QMessageBox>
#include <QHostInfo>
#include <QNetworkInterface>

class NetworkInformation : public QWidget
{
	Q_OBJECT

public:
	NetworkInformation(QWidget *parent = 0);

	void getHostInformation();
	public slots:
	void slotDetail();
private:
	QLabel * hostLabel;
	QLineEdit *LineEditLocalHostName;
	QLabel *ipLabel;
	QLineEdit *LineEditAddress;

	QPushButton *detailBtn;

	QGridLayout *mainLayout;
};