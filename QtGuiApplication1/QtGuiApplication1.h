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
	void showSearchItemButtons();
	void hideSearchItemButtons();

	Ui::QtGuiApplication1Class ui;
	HotWindowClass * hotWindow;
	SearchWindow * searchWindow;
	int lastClicked = 1;

private slots:
	void searchClicked();
	void hotClicked();
	void starClicked();
	void weiboClicked();
	void dongmanClicked();
	void shipinClicked();
	void zhihuClicked();
	void qidianClicked();
};
