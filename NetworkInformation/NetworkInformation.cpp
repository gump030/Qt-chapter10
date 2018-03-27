#include "NetworkInformation.h"

NetworkInformation::NetworkInformation(QWidget *parent)
	: QWidget(parent)
{
	hostLabel = new QLabel(tr("��������"));
	LineEditLocalHostName = new QLineEdit;
	ipLabel = new QLabel(tr("IP ��ַ��"));
	LineEditAddress = new QLineEdit;

	detailBtn = new QPushButton(tr("��ϸ"));

	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(hostLabel, 0, 0);
	mainLayout->addWidget(LineEditLocalHostName, 0, 1);
	mainLayout->addWidget(ipLabel, 1, 0);
	mainLayout->addWidget(LineEditAddress, 1, 1);
	mainLayout->addWidget(detailBtn, 2, 0, 1, 2);
	getHostInformation();
	connect(detailBtn, SIGNAL(clicked()), this, SLOT(slotDetail()));
}

//��ȡ������Ϣ
void NetworkInformation::getHostInformation()
{
	QString localHostName = QHostInfo::localHostName();
	LineEditLocalHostName->setText(localHostName);

	QHostInfo hostInfo = QHostInfo::fromName(localHostName);
	QList<QHostAddress> listAddress = hostInfo.addresses();
	if (!listAddress.isEmpty())
	{
		LineEditAddress->setText(listAddress.first().toString());
	}
}

void NetworkInformation::slotDetail()
{
	QString detail = "";
	QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();
	for (int i = 0; i<list.count(); i++)
	{
		QNetworkInterface interface = list.at(i);
		detail = detail + tr("�豸��") + interface.name() + "\n";
		detail = detail + tr("Ӳ����ַ��") + interface.hardwareAddress() + "\n";
		QList<QNetworkAddressEntry> entryList = interface.addressEntries();
		for (int j = 0; j<entryList.count(); j++)
		{
			QNetworkAddressEntry entry = entryList.at(j);
			detail = detail + "\t" + tr("IP ��ַ��") + entry.ip().toString() + "\n";
			detail = detail + "\t" + tr("�������룺") + entry.netmask().toString() + "\n";
			detail = detail + "\t" + tr("�㲥��ַ��") + entry.broadcast().toString() + "\n";
		}
	}
	QMessageBox::information(this, tr("Detail"), detail);
}
