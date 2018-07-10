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
	void parseHotMedia(QString data);
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
	QStringList *baiduDongmanList = new QStringList();
	QStringList *baiduFictionList = new QStringList();
	QStringList *baiduMovieList = new QStringList();
	QStringList *baiduOperaList = new QStringList();
	QStringList *baiduArtsList = new QStringList();

	RankList *list1 ;
	RankList *list2 ;
	RankList *list3 ;
	RankList *list4 ;
	RankList *list5 ;
	RankList *list6 ;
	RankList *list7 ;
	RankList *list8 ;
	RankList *list9 ;
	RankList *list10 ;
	RankList *list11 ;
	RankList *list12 ;
	Ui::HotWindowClass ui;
};
