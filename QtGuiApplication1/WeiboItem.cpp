#include "WeiboItem.h"

WeiboItem::WeiboItem(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.text1->setWordWrap(true);
	ui.text2->setWordWrap(true);
	ui.text3->setWordWrap(true);
	ui.text4->setWordWrap(true);
	ui.text5->setWordWrap(true);

}

WeiboItem::~WeiboItem()
{
}

void WeiboItem::setBackgroundImage(QPixmap pixmap)
{
	ui.backgroundImage->setPixmap(pixmap);
}




void WeiboItem::setData(QStringList *title, QString imageUrl, QString webUrl, QStringList *list, QStringList * data,QString name)
{
	this->name = name;
	this->imageUrl = imageUrl;
	this->webUrl = webUrl;
	this->list = list;

	ui.name->setText(name);
	showTitle(title);
	getImage(imageUrl);
	showText(list);
	showDate(data);

}

void WeiboItem::showTitle(QStringList *title)
{
	ui.name1->setText(title->at(0));
	ui.name2->setText(title->at(1));
	ui.name3->setText(title->at(2));
	ui.name4->setText(title->at(3));
	ui.name5->setText(title->at(4));
}

void WeiboItem::showDate(QStringList *date)
{
	ui.date1->setText(date->at(0));
	ui.date2->setText(date->at(1));
	ui.date3->setText(date->at(2));
	ui.date4->setText(date->at(3));
	ui.date5->setText(date->at(4));
}

void WeiboItem::showText(QStringList *list)
{
	ui.text1->setText(list->at(0));
	ui.text2->setText(list->at(1));
	ui.text3->setText(list->at(2));
	ui.text4->setText(list->at(3));
	ui.text5->setText(list->at(4));
}

void WeiboItem::getImage(QString url)
{
	QNetworkAccessManager *m_networkManager = new QNetworkAccessManager(this);
	QNetworkRequest request;
	request.setUrl(url);
	connect(m_networkManager, SIGNAL(finished(QNetworkReply *)), this, SLOT(showImage(QNetworkReply *)));
	m_networkManager->get(request);
}

void WeiboItem::setWindow(QWidget *window)
{
	this->window = window;
}

void WeiboItem::clickUrl()
{
	openWeb(this->webUrl);
}

void WeiboItem::openWeb(QString url) 
{
	QWebEngineView *webView = new QWebEngineView();
	webView->setUrl(url);
	webView->setFixedHeight(720);
	webView->setFixedWidth(1200);
	webView->show();

	QPropertyAnimation *moveAnimation = new QPropertyAnimation(webView, "pos");
	moveAnimation->setDuration(1000);
	moveAnimation->setStartValue(QPoint(window->x(), 0));
	moveAnimation->setEndValue(QPoint(window->x(), window->y()));
	moveAnimation->setEasingCurve(QEasingCurve::OutBounce);
	moveAnimation->start();

	QPropertyAnimation *alphaAnimation = new QPropertyAnimation(webView, "windowOpacity");
	alphaAnimation->setDuration(1000);
	alphaAnimation->setStartValue(0);
	alphaAnimation->setEndValue(1);

	QParallelAnimationGroup *paraGroup = new QParallelAnimationGroup(this);
	paraGroup->addAnimation(alphaAnimation);
	paraGroup->addAnimation(moveAnimation);
	paraGroup->start();
}

void WeiboItem::showImage(QNetworkReply *reply)
{
	if (reply->error() == QNetworkReply::NoError)
	{
		QByteArray bytes = reply->readAll();
		QPixmap pixmap;
		pixmap.loadFromData(bytes);
		ui.imageLabel->setPixmap(pixmap);
		QPixmap mask("Resources/roundMask.png");
		ui.imageLabel->setMask(mask.mask());
		QPixmap littleMask("Resources/littleMask.png");
		ui.image1->setPixmap(pixmap);
		ui.image2->setPixmap(pixmap);
		ui.image3->setPixmap(pixmap);
		ui.image4->setPixmap(pixmap);
		ui.image5->setPixmap(pixmap);

		ui.image1->setMask(littleMask.mask());
		ui.image2->setMask(littleMask.mask());
		ui.image3->setMask(littleMask.mask());
		ui.image4->setMask(littleMask.mask());
		ui.image5->setMask(littleMask.mask());
	}
}
