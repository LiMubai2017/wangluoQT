#include "AddWindow.h"

AddWindow::AddWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.weiboLabel->setPixmap(QPixmap("Resources/weiboLabel.png"));
	ui.cartoonLabel->setPixmap(QPixmap("Resources/cartoonLabel.png"));
	ui.zhihuLabel_2->setPixmap(QPixmap("Resources/zhihuLabel.png"));
	ui.shipinLabel->setPixmap(QPixmap("Resources/shipinLabel.png"));
	ui.qidianLabel->setPixmap(QPixmap("Resources/qidianLabel.png"));
}

QString AddWindow::addUID(QString url)
{
	// 构造请求
	QNetworkRequest request;
	request.setUrl(QUrl(url));

	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	// 发送请求
	QNetworkReply *pReplay = manager->get(request);

	// 开启一个局部的事件循环，等待响应结束，退出
	QEventLoop eventLoop;
	QObject::connect(manager, &QNetworkAccessManager::finished, &eventLoop, &QEventLoop::quit);
	eventLoop.exec();

	// 获取响应信息
	QByteArray bytes = pReplay->readAll();
	QString response = QString(bytes);
	return response;
}

void AddWindow:: addWeibo()
{
	QString url = QString("http://haojie06.me:9999/add?sinablog,id=3,uid=") + ui.weiboInput->toPlainText();
	ui.weiboResult->setText(addUID(url));
}
void AddWindow:: addZhihu()
{
	QString url = QString("http://haojie06.me:9999/add?zhihu,id=3,uid=") + ui.weiboInput->toPlainText();
	ui.zhihuResult->setText(addUID(url));
}
void AddWindow:: addCartoon()
{
	QString url = QString("http://haojie06.me:9999/add?anime,id=3,uid=") + ui.weiboInput->toPlainText();
	ui.cartoonResult->setText(addUID(url));
}
void AddWindow:: addShipin()
{
	QString url = QString("http://haojie06.me:9999/add?tv,id=3,uid=") + ui.weiboInput->toPlainText();
	ui.shipinResult->setText(addUID(url));
}
void AddWindow:: addQidian()
{
	QString url = QString("http://haojie06.me:9999/add?novel,id=3,uid=") + ui.weiboInput->toPlainText();
	ui.qidianResult->setText(addUID(url));
}

AddWindow::~AddWindow()
{
	QString url = QString("http://haojie06.me:9999/add?sinablog,id=3,uid=") + ui.weiboInput->toPlainText();
	ui.weiboResult->setText(addUID(url));
}
