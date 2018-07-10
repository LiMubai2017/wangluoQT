#pragma once

#include <QWidget>
#include "ui_WeiboItem.h"
#include <qnetworkreply.h>
#include <qbitmap.h>
#include <QtWebEngineWidgets>

class WeiboItem : public QWidget
{
	Q_OBJECT

public:
	WeiboItem(QWidget *parent = Q_NULLPTR);
	~WeiboItem();
	void setData(QStringList *title, QString imageUrl, QString webUrl, QStringList *list, QStringList *data,QString name);
	void getImage(QString url);
	void showTitle(QStringList *title);
	void setBackgroundImage(QPixmap pixmap);
	void setWindow(QWidget *window);

private:
	QString name;
	QString imageUrl;
	QString webUrl;
	QStringList *list;
	QWidget *window;
	Ui::WeiboItem ui;

	void openWeb(QString url);
	void showDate(QStringList *LIST);
	void showText(QStringList *list);

private slots:
	void clickUrl();
	void showImage(QNetworkReply *reply);
};
