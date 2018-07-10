#include "HotWindowClass.h"

HotWindowClass::HotWindowClass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	list1 = new RankList(this);
	list2 = new RankList(this);
	list3 = new RankList(this);
	
	list5 = new RankList(this);
	list6 = new RankList(this);
	list7 = new RankList(this);
	list8 = new RankList(this);
	list9 = new RankList(this);
	list10 = new RankList(this);
	list11 = new RankList(this);
	list12 = new RankList(this);

	ui.netMusicHotLayout->addWidget(list1, 0, 0);
	list1->setWindow(parent);
	ui.netMusicNewLayout->addWidget(list2, 0, 0);
	list2->setWindow(parent);
	ui.netMusicUpLayout->addWidget(list3, 0, 0);
	list3->setWindow(parent);
	ui.tiebaLayout->addWidget(list5, 0, 0);
	list5->setWindow(parent);
	ui.weiboLayout->addWidget(list6, 0, 0);
	list6->setWindow(parent);
	ui.baiduLayout->addWidget(list7, 0, 0);
	list7->setWindow(parent);
	ui.baiduDongmanLayout->addWidget(list8, 0, 0);
	list8->setWindow(parent);
	ui.baiduFictionLayout->addWidget(list9, 0, 0);
	list9->setWindow(parent);
	ui.baiduMovieLayout->addWidget(list10, 0, 0);
	list10->setWindow(parent);
	ui.baiduOperaLayout->addWidget(list11, 0, 0);
	list11->setWindow(parent);
	ui.baiduArtsLayout->addWidget(list12, 0, 0);
	list12->setWindow(parent);
	

	parseNetMusicData(getData(QString("http://haojie06.me:9999/get?cloudmusic")));
	//list1->setData(netMusicUpList);
	parseHotNews(getData(QString("http://haojie06.me:9999/get?hotnews")));
	parseHotMedia(getData(QString("http://haojie06.me:9999/get?hotmedia")));
}

void HotWindowClass::parseHotMedia(QString data)
{
	int l, r;
	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("热门电影$$%1$$")).arg(i)) + 9;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString title = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*baiduMovieList << title << " " << src;
	}
	list10->setData(baiduMovieList);

	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("热门电视剧$$%1$$")).arg(i)) + 10;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString title = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*baiduOperaList << title << " " << src;
	}
	list11->setData(baiduOperaList);

	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("热门综艺$$%1$$")).arg(i)) + 9;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString title = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*baiduArtsList << title << " " << src;
	}
	list12->setData(baiduArtsList);

	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("热门动漫$$%1$$")).arg(i)) + 9;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString title = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*baiduDongmanList << title << " " << src;
	}
	list8->setData(baiduDongmanList);

	for (int i = 1; i <= 10; i++) {
		l = data.indexOf(QString(QStringLiteral("热门小说$$%1$$")).arg(i)) + 9;
		if (i == 10) l++;
		r = data.indexOf("$$", l);
		QString title = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString src = data.mid(l, r - l);
		*baiduFictionList << title << " " << src;
	}
	list9->setData(baiduFictionList);
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
	list7->setData(baiduList);

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
