#pragma once

#include <QWidget>
#include<qnetworkaccessmanager.h>
#include<qnetworkreply.h>
#include "ui_MediaItem.h"
#include <QtWebEngineWidgets>

class MediaItem : public QWidget
{
	Q_OBJECT

public:
	MediaItem(QWidget *parent = Q_NULLPTR);
	~MediaItem();

	void setData(QString weburl, QString imageUrl, QString name, QString author, QString description, QString updateTitle);
	void setBackground(QPixmap pixmap);
	void setWindow(QWidget * qwidget);

private:
	QString webUrl;
	QWidget *window;
	void loadImage(QString url);
	Ui::MediaItem ui;

private slots:
	void openWeb();
	void showImage(QNetworkReply *reply);
};
