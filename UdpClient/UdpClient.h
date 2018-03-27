#pragma once

#include <QtWidgets/QDialog>
#include <QDialog>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QUdpSocket>

class UdpClient : public QDialog
{
	Q_OBJECT

public:
	UdpClient(QWidget *parent = 0, Qt::WindowFlags f = 0);

	public slots:
	void CloseBtnClicked();
	void dataReceived();
private:
	QTextEdit * ReceiveTextEdit;
	QPushButton *CloseBtn;
	QVBoxLayout *mainLayout;
	int port;
	QUdpSocket *udpSocket;
};