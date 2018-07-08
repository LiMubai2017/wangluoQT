#include "HotWindowClass.h"

HotWindowClass::HotWindowClass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	list1 = new RankList(this);
	list2 = new RankList(this);
	list3 = new RankList(this);
	list4 = new RankList(this);
	list5 = new RankList(this);
	list6 = new RankList(this);

	ui.netMusicHotLayout->addWidget(list1, 0, 0);
	list1->setWindow(parent);
	ui.netMusicNewLayout->addWidget(list2, 0, 0);
	list2->setWindow(parent);
	ui.netMusicUpLayout->addWidget(list3, 0, 0);
	list3->setWindow(parent);
	ui.baiduLayout->addWidget(list4, 0, 0);
	list4->setWindow(parent);
	ui.tiebaLayout->addWidget(list5, 0, 0);
	list5->setWindow(parent);
	ui.weiboLayout->addWidget(list6, 0, 0);
	list6->setWindow(parent);

	parseNetMusicData(getData(QString("http://haojie06.me:9999/get?cloudmusic")));
	//list1->setData(netMusicUpList);
	parseHotNews(getData(QString("http://haojie06.me:9999/get?hotnews")));
}

void HotWindowClass::parseHotNews(QString data)
{
	int l, r;
	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("百度风云榜实时热点$$%1$$")).arg(i)) + 14;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString title = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*baiduList << title << " " << src;
	}
	list4->setData(baiduList);

	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("贴吧实时热点$$%1$$")).arg(i)) + 11;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString title = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*tiebaList << title << " " << src;
	}
	list5->setData(tiebaList);

	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("微博热搜$$%1$$")).arg(i)) + 9;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString title = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*weiboList << title << " " << src;
	}
	list6->setData(weiboList);
}

void HotWindowClass::parseNetMusicData(QString data)
{
	int l, r;
	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("$$云音乐飙升榜$$%1$$")).arg(i))+13;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString song = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString singer = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*netMusicUpList << song << singer << src;
	}
	list3->setData(netMusicUpList);

	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("$$云音乐新歌榜$$%1$$")).arg(i)) + 13;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString song = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString singer = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*netMusicNewList << song << singer << src;
	}
	list2->setData(netMusicNewList);

	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("$$云音乐热歌榜$$%1$$")).arg(i)) + 13;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString song = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString singer = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*netMusicHotList << song << singer << src;
	}
	list1->setData(netMusicHotList);
}

QString HotWindowClass::getData(QString url)
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

HotWindowClass::~HotWindowClass()
{
}
