#pragma once

#include <QWidget>
#include "ui_StarWindow.h"

class StarWindow : public QWidget
{
	Q_OBJECT

public:
	StarWindow(QWidget *parent = Q_NULLPTR);
	~StarWindow();

private:
	Ui::StarWindow ui;
};
