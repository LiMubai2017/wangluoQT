#include "HotWindowClass.h"
#include <QLabel>
#include <RankList.h>

HotWindowClass::HotWindowClass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//setLayout(ui.gridLayout);

	RankList *list1 = new RankList(this);
	ui.netMusicHotLayout->addWidget(list1, 0, 0);
	list1->setWindow(parent);

	RankList *list2 = new RankList(this);
	ui.netMusicNewLayout->addWidget(list2, 0, 0);
	list2->setWindow(parent);

	RankList *list3 = new RankList(this);
	ui.netMusicUpLayout->addWidget(list3, 0, 0);
	list3->setWindow(parent);

	RankList *list4 = new RankList(this);
	ui.baiduLayout->addWidget(list4, 0, 0);
	list4->setWindow(parent);

	RankList *list5 = new RankList(this);
	ui.tiebaLayout->addWidget(list5, 0, 0);
	list5->setWindow(parent);

	RankList *list6 = new RankList(this);
	ui.weiboLayout->addWidget(list6, 0, 0);
	list6->setWindow(parent);

	getData();
}

void HotWindowClass::getData()
{
	QString baseUrl = "http://haojie06.me:9999/get?cloudmusic";
	// 构造请求
	QNetworkRequest request;
	request.setUrl(QUrl(baseUrl));

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
	
}

HotWindowClass::~HotWindowClass()
{
}
