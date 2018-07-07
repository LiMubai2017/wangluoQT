#pragma once

#include <QWidget>
#include "ui_HotWindowClass.h"

class HotWindowClass : public QWidget
{
	Q_OBJECT

public:
	void getData();
	HotWindowClass(QWidget *parent = Q_NULLPTR);
	~HotWindowClass();

private:
	QStringList *list1;
	QStringList *list2;
	QStringList *list3;
	QStringList *list4;
	QStringList *list5;
	QStringList *list6;
	Ui::HotWindowClass ui;
};
