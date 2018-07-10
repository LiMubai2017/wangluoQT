#include "MediaItem.h"

MediaItem::MediaItem(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

void MediaItem::setData(QString weburl,QString imageUrl, QString name, QString author, QString description, QString updateTitle)
{
	this->webUrl = weburl;
	loadImage(imageUrl);
	ui.nameLabel->setText(name);
	ui.authorLabel->setText(author);
	ui.updateLabel->setText(updateTitle);
}

void MediaItem::setBackground(QPixmap pixmap)
{
	ui.backgroundLabel->setPixmap(pixmap);
}

void MediaItem::loadImage(QString url)
{
	QNetworkAccessManager *m_networkManager = new QNetworkAccessManager(this);
	QNetworkRequest request;
	request.setUrl(url);
	connect(m_networkManager, SIGNAL(finished(QNetworkReply *)), this, SLOT(showImage(QNetworkReply *)));
	m_networkManager->get(request);
}

void MediaItem::showImage(QNetworkReply *reply)
{
	if (reply->error() == QNetworkReply::NoError)
	{
		QByteArray bytes = reply->readAll();
		QPixmap pixmap;
		pixmap.loadFromData(bytes);
		ui.imageLabel->setPixmap(pixmap);
	}
}

void MediaItem::openWeb()
{
	QString url = webUrl;
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

void MediaItem::setWindow(QWidget *qwidget)
{
	this->window = qwidget;
}

MediaItem::~MediaItem()
{
}
