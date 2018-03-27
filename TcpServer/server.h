#ifndef SERVER_H
#define SERVER_H

#pragma execution_character_set("utf-8")

#include <QTcpServer>
#include <QObject>
#include "tcpclientsocket.h"

class Server : public QTcpServer
{
    Q_OBJECT
public:
    Server(QObject *parent=0,int port=0);
    QList<TcpClientSocket*> tcpClientSocketList;
signals:
    void updateServer(QString,int);
public slots:
    void updateClients(QString,int);
    void slotDisconnected(int);
protected:
	//这里要用qintqtr，否则不能重写
    void incomingConnection(qintptr  socketDescriptor);
};

#endif // SERVER_H
