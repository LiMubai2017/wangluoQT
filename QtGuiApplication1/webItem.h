#pragma once

#include <QWidget>
#include "ui_webItem.h"
#include <QtWebEngineWidgets>

class webItem : public QWidget
{
	Q_OBJECT

public:
	void setData(QString webUrl1,QPixmap pixmap1,QString webUrl2,QPixmap pixmap2);
	void setWindow(QWidget *window);
	webItem(QWidget *parent = Q_NULLPTR);
	~webItem();

private:
	QString webUrl1;
	QString webUrl2;
	QWidget *window;
	Ui::webItem ui;

	void openWeb(QString url);

private slots:
	void openWeb1();
	void openWeb2();
};
