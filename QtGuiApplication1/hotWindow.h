#pragma once

#include <QWidget>
#include "ui_hotWindow.h"

class hotWindow : public QWidget
{
	Q_OBJECT

public:
	hotWindow(QWidget *parent = Q_NULLPTR);
	~hotWindow();

private:
	Ui::hotWindow ui;
};
