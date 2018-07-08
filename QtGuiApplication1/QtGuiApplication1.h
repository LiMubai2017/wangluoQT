#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include <QtWebEngineWidgets>
#include <HotWindowClass.h>
#include <SearchWindow.h>

class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiApplication1Class ui;
	HotWindowClass * hotWindow;
	SearchWindow * searchWindow;

private slots:
	void searchClicked();
	void hotClicked();
	void starClicked();
};
