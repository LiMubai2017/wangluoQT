#pragma once

#include <QWidget>
#include "ui_HotWindowClass.h"
#include <RankList.h>
#include <QLabel>

class HotWindowClass : public QWidget
{
	Q_OBJECT

public:
	void parseNetMusicData(QString data);
	void parseHotNews(QString data);
	QString getData(QString url);
	HotWindowClass(QWidget *parent = Q_NULLPTR);
	~HotWindowClass();

private:
	QStringList *netMusicHotList = new QStringList();
	QStringList *netMusicNewList = new QStringList();
	QStringList *netMusicUpList = new QStringList();
	QStringList *baiduList = new QStringList();
	QStringList *tiebaList = new QStringList();
	QStringList *weiboList = new QStringList();

	RankList *list1 ;
	RankList *list2 ;
	RankList *list3 ;
	RankList *list4 ;
	RankList *list5 ;
	RankList *list6 ;
	Ui::HotWindowClass ui;
};
