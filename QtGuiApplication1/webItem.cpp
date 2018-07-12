#include "webItem.h"

webItem::webItem(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

void webItem::setData(QString webUrl1, QPixmap pixmap1, QString webUrl2, QPixmap pixmap2)
{
	ui.image1->setPixmap(pixmap1);
	this->webUrl1 = webUrl1;
	if (webUrl2.compare("") == 0) {
		ui.pushButton_2->hide();
		ui.image2->hide();
	}
	else {
		this->webUrl2 = webUrl2;
		ui.image2->setPixmap(pixmap2);
	}
}

void webItem::openWeb1()
{
	openWeb(webUrl1);
}

void webItem::openWeb2()
{
	openWeb(webUrl2);
}

void webItem::openWeb(QString url)
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

void webItem::setWindow(QWidget *window)
{
	this->window = window;
}

webItem::~webItem()
{
}
