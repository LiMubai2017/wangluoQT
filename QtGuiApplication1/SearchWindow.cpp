#include "SearchWindow.h"

SearchWindow::SearchWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	
	lastPage = ui.weiboListWidget;
	ui.weiboListWidget->hide();
	ui.zhihuListWidget->hide();
	ui.dongmanListWidget->hide();
	ui.shipinListWidget->hide();
	ui.qidianListWidget->hide();
	ui.addListWidget->hide();
	ui.label->setPixmap(QPixmap("Resources/searchbg.png"));
	loadWeibo();
	loadZhihu();
	loadDongman();
	loadNovel();
	loadShipin();

	//����addҳ��
	AddWindow *addWindow = new AddWindow();
	QListWidgetItem *item = new QListWidgetItem();
	item->setSizeHint(QSize(950, 720));
	ui.addListWidget->addItem(item);
	ui.addListWidget->setItemWidget(item, addWindow);
}

void SearchWindow::loadDongman()
{
	QString url("http://haojie06.me:9999/get?followmedia,id=3");
	parseDongmanData(getData(url));
}

void SearchWindow::loadNovel()
{
	QString url("http://haojie06.me:9999/get?followmedia,id=3");
	parseNovelData(getData(url));
}

void SearchWindow::loadShipin()
{
	QString url("http://haojie06.me:9999/get?followmedia,id=3");
	parseShipinData(getData(url));
}

void SearchWindow::loadZhihu()
{
	QString url("http://haojie06.me:9999/get?zhihu,id=3");
	parseZhihuData(getData(url));
}

void SearchWindow::loadWeibo()
{
	QString url("http://haojie06.me:9999/get?sinablog,id=3");
	parseWeiboData(getData(url));
}

void SearchWindow::parseZhihuData(QString data)
{
	int flag = 0;

	while (flag != -1) {
		int l, r;
		QString zhihuName, zhihuWebUrl, zhihuImageUrl;
		QStringList *zhihuTextList = new QStringList();
		QStringList *zhihuTitleList = new QStringList();
		QStringList *zhihuDateList = new QStringList();

		l = data.indexOf("$$",flag);
		l = data.indexOf("$$", l + 2);
		r = data.indexOf("$$", l + 2);
		zhihuImageUrl = data.mid(l + 2, r - l - 2);
		l = r + 2;
		r = data.indexOf("$$", l);
		zhihuName = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		zhihuWebUrl = data.mid(l, r - l);
		l = r = flag;
		for (int i = 1; i <= 5; i++) {
			l = data.indexOf(zhihuWebUrl, r) + zhihuWebUrl.length() + 2;
			r = data.indexOf("$$", l);
			QString tempMovement = data.mid(l, r - l);
			l = r + 2;
			r = data.indexOf("$$", l);
			QString tempTitle = data.mid(l, r - l);
			l = r + 2;
			r = data.indexOf("$$", l);
			QString tempText = data.mid(l, r - l);
			l = r + 2;
			r = data.indexOf("', '", l);
			QString tempDate = data.mid(l, r - l);
			*zhihuTextList << tempText;
			*zhihuDateList << tempDate;
			*zhihuTitleList << tempMovement + "  " + tempTitle;
		}
		addZhihuItem(zhihuTitleList, zhihuImageUrl, zhihuWebUrl, zhihuTextList, zhihuDateList,zhihuName);
		flag = data.indexOf("'&&'", r);
		flag = data.indexOf(QStringLiteral("֪��"), flag);
	}
}

void SearchWindow::parseWeiboData(QString data)
{
	int flag = 0;

	while (flag != -1) {
		int l, r;
		QString weiboName, weiboWebUrl, weiboImageUrl;
		QStringList *weiboTextList = new QStringList();
		QStringList *weiboDateList = new QStringList();

		l = data.indexOf("$$",flag);
		l = data.indexOf("$$", l + 2);
		r = data.indexOf("$$", l + 2);
		weiboImageUrl = data.mid(l + 2, r - l - 2);
		l = r + 2;
		r = data.indexOf("$$", l);
		weiboName = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		weiboWebUrl = data.mid(l, r - l);
		l = r = flag;
		for (int i = 1; i <= 5; i++) {
			l = data.indexOf(weiboWebUrl, r) + weiboWebUrl.length() + 2;
			r = data.indexOf("$$", l);
			QString tempText = data.mid(l, r - l);
			l = r + 2;
			r = data.indexOf(", ", l) - 1;
			QString tempDate = data.mid(l, r - l);
			*weiboTextList << tempText;
			*weiboDateList << tempDate;
		}

		QStringList * tempList = new QStringList();
		for (int i = 1; i <= 5; i++) {
			*tempList << weiboName;
		}
		addWeiboItem(tempList, weiboImageUrl, weiboWebUrl, weiboTextList, weiboDateList,weiboName);
		flag = data.indexOf("'&&'", r);
		flag = data.indexOf(QStringLiteral("����΢��"), flag);
	}
}

void SearchWindow::addWeiboItem(QStringList *titleList, QString imageUrl, QString webUrl, QStringList *list, QStringList *date,QString name)
{
	WeiboItem *weiboItem = new WeiboItem();
	QListWidgetItem *item = new QListWidgetItem();
	item->setSizeHint(QSize(950, 1200));
	ui.weiboListWidget->addItem(item);
	ui.weiboListWidget->setItemWidget(item, weiboItem);
	weiboItem->setData(titleList,imageUrl, webUrl, list,date,name);
	weiboItem->setBackgroundImage(QPixmap("Resources/weibobg.png"));
	weiboItem->setWindow(parentWidget());
}

void SearchWindow::addDongmanItem(QString webUrl,QString iamgeUrl, QString name, QString author, QString description, QString updateTitle)
{
	MediaItem *mediaItem = new MediaItem();
	QListWidgetItem *item = new QListWidgetItem();
	item->setSizeHint(QSize(950, 360));
	ui.dongmanListWidget->addItem(item);
	ui.dongmanListWidget->setItemWidget(item, mediaItem);
	mediaItem->setData(webUrl,iamgeUrl, name, author, description, updateTitle);
	mediaItem->setBackground(QPixmap("Resources/dongmanbg.png"));
	mediaItem->setWindow(parentWidget());
}

void SearchWindow::addShipinItem(QString webUrl, QString iamgeUrl, QString name, QString author, QString description, QString updateTitle)
{
	MediaItem *mediaItem = new MediaItem();
	QListWidgetItem *item = new QListWidgetItem();
	item->setSizeHint(QSize(950, 360));
	ui.shipinListWidget->addItem(item);
	ui.shipinListWidget->setItemWidget(item, mediaItem);
	mediaItem->setData(webUrl, iamgeUrl, name, author, description, updateTitle);
	mediaItem->setBackground(QPixmap("Resources/shipinbg.png"));
	mediaItem->setWindow(parentWidget());
}

void SearchWindow::addNovelItem(QString webUrl,QString iamgeUrl, QString name, QString author, QString description, QString updateTitle)
{
	MediaItem *mediaItem = new MediaItem();
	QListWidgetItem *item = new QListWidgetItem();
	item->setSizeHint(QSize(950, 360));
	ui.qidianListWidget->addItem(item);
	ui.qidianListWidget->setItemWidget(item, mediaItem);
	mediaItem->setData(webUrl, iamgeUrl, name, author, description, updateTitle);
	mediaItem->setBackground(QPixmap("Resources/novelbg.png"));
	mediaItem->setWindow(parentWidget());
}

void SearchWindow::addZhihuItem(QStringList *titleList, QString imageUrl, QString webUrl, QStringList *list, QStringList *date,QString name)
{
	WeiboItem *weiboItem = new WeiboItem();
	QListWidgetItem *item = new QListWidgetItem();
	item->setSizeHint(QSize(950, 1200));
	ui.zhihuListWidget->addItem(item);
	ui.zhihuListWidget->setItemWidget(item, weiboItem);
	weiboItem->setData(titleList, imageUrl, webUrl, list, date,name);
	weiboItem->setBackgroundImage(QPixmap("Resources/zhihubg.png"));
	weiboItem->setWindow(parentWidget());
}

QString SearchWindow::getData(QString url)
{
	// ��������
	QNetworkRequest request;
	request.setUrl(QUrl(url));

	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	// ��������
	QNetworkReply *pReplay = manager->get(request);

	// ����һ���ֲ����¼�ѭ�����ȴ���Ӧ�������˳�
	QEventLoop eventLoop;
	QObject::connect(manager, &QNetworkAccessManager::finished, &eventLoop, &QEventLoop::quit);
	eventLoop.exec();

	// ��ȡ��Ӧ��Ϣ
	QByteArray bytes = pReplay->readAll();
	QString response = QString(bytes);
	return response;
}

void SearchWindow::parseDongmanData(QString data)
{
	int flag;
	flag = data.indexOf(QStringLiteral("��Ѷ����"));
	while (flag != -1) {
		int l, r;
		l = data.indexOf("$$",flag) + 2;
		r = data.indexOf("$$", l);
		QString name = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString imageUrl = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString webUrl = data.mid(l, r - l);
		l = data.indexOf("$$", r + 2) + 2;
		r = data.indexOf("$$", l);
		QString updateTitle = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString author = data.mid(l, r - l);

		addDongmanItem(webUrl, imageUrl, name, author, "", updateTitle);
		flag = data.indexOf(QStringLiteral("��Ѷ����"), r);
	}
}
void SearchWindow::parseShipinData(QString data)
{
	int flag;
	flag = data.indexOf(QStringLiteral("��Ѷ��Ƶ"));
	while (flag != -1) {
		int l, r;
		l = data.indexOf("$$", flag) + 2;
		r = data.indexOf("$$", l);
		QString name = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString imageUrl = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString webUrl = data.mid(l, r - l);
		l = data.indexOf("$$", r + 2) + 2;
		r = data.indexOf("$$", l);
		QString updateTitle = data.mid(l, r - l);
		addShipinItem(webUrl, imageUrl, name, "", "", updateTitle);
		flag = data.indexOf(QStringLiteral("��Ѷ��Ƶ"), r);
	}
}
void SearchWindow::parseNovelData(QString data)
{
	int flag;
	flag = data.indexOf(QStringLiteral("���������"));
	while (flag != -1) {
		int l, r;
		l = data.indexOf("$$", flag) + 2;
		r = data.indexOf("$$", l);
		QString name = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString imageUrl = data.mid(l, r - l);
		imageUrl = imageUrl.mid(0, imageUrl.length() - 2);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString webUrl = data.mid(l, r - l);
		l = data.indexOf("$$", r + 2) + 2;
		r = data.indexOf("$$", l);
		QString updateTitle = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString author = data.mid(l, r - l);
		l = r + 2;
		r = data.indexOf("$$", l);
		QString description = data.mid(l, r - l);
		addNovelItem(webUrl, imageUrl, name, author, description, updateTitle);
		flag = data.indexOf(QStringLiteral("���������"), r);
	}
}

void SearchWindow::hideAll()
{
	lastPage->hide();
}

void SearchWindow::showAdd()
{
	lastPage->hide();
	lastPage = ui.addListWidget;
	ui.addListWidget->show();
}

void SearchWindow::showWeibo()
{
	lastPage->hide();
	lastPage = ui.weiboListWidget;
	ui.weiboListWidget->show();
}
void SearchWindow::showZhihu()
{
	lastPage->hide();
	lastPage = ui.zhihuListWidget;
	ui.zhihuListWidget->show();
}
void SearchWindow::showQidian()
{
	lastPage->hide();
	lastPage = ui.qidianListWidget;
	ui.qidianListWidget->show();
}
void SearchWindow::showDongman()
{
	lastPage->hide();
	lastPage = ui.dongmanListWidget;
	ui.dongmanListWidget->show();
}
void SearchWindow::showShipin()
{
	lastPage->hide();
	lastPage = ui.shipinListWidget;
	ui.shipinListWidget->show();
}

SearchWindow::~SearchWindow()
{
}
