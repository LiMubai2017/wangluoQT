#pragma once

#include <QWidget>
#include "ui_HotWindowClass.h"

class HotWindowClass : public QWidget
{
	Q_OBJECT

public:
	HotWindowClass(QWidget *parent = Q_NULLPTR);
	~HotWindowClass();

private:
	Ui::HotWindowClass ui;
};
