#pragma once

#include <QWidget>
#include "ui_AddWindow.h"
#include<qnetworkaccessmanager.h>
#include<qnetworkreply.h>

class AddWindow : public QWidget
{
	Q_OBJECT

public:
	AddWindow(QWidget *parent = Q_NULLPTR);
	~AddWindow();

private:
	Ui::AddWindow ui;

	QString addUID(QString url);

private slots:
	void addWeibo();
	void addZhihu();
	void addCartoon();
	void addShipin();
	void addQidian();
};
