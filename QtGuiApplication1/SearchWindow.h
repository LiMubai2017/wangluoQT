#pragma once

#include <QWidget>
#include "ui_SearchWindow.h"
#include <qnetworkreply.h>
#include <qlabel.h>
#include <WeiboItem.h>
#include<MediaItem.h>

class SearchWindow : public QWidget
{
	Q_OBJECT

public:
	SearchWindow(QWidget *parent = Q_NULLPTR);
	~SearchWindow();
	void showWeibo();
	void showZhihu();
	void showQidian();
	void showDongman();
	void showShipin();

private:
	QListWidget *lastPage;

	Ui::SearchWindow ui;
	void loadWeibo();
	void loadZhihu();
	void loadDongman();
	void loadShipin();
	void loadNovel();
	QString getData(QString url);
	void parseWeiboData(QString data);
	void parseZhihuData(QString data);
	void parseDongmanData(QString data);
	void parseShipinData(QString data);
	void parseNovelData(QString data);

	void addWeiboItem(QStringList *titleList, QString imageUrl, QString webUrl, QStringList *list, QStringList *date,QString name);
	void addZhihuItem(QStringList *titleList, QString imageUrl, QString webUrl, QStringList *list, QStringList *date,QString name);
	void addDongmanItem(QString webUrl,QString iamgeUrl, QString name, QString author, QString description, QString updateTitle);
	void addNovelItem(QString webUrl,QString iamgeUrl, QString name, QString author, QString description, QString updateTitle);

private slots:
};
