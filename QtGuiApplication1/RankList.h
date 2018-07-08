#pragma once

#include <QWidget>
#include "ui_RankList.h"
#include <string.h>
#include <iostream>
#include <QtWebEngineWidgets>


class RankList : public QWidget
{
	Q_OBJECT

public:
	RankList(QWidget *parent = Q_NULLPTR);
	~RankList();
	void setData(QStringList *data);
	void setWindow(QWidget *window);

private:
	QStringList *data ;
	QWidget *window;

	void setDefaultData();
	void updataUI();
	void openWeb(QString url);
	Ui::RankList ui;

private slots:
	void click1();
	void click2();
	void click3();
	void click4();
	void click5();
	void click6();
	void click7();
	void click8();
	void click9();
	void click10();
};
