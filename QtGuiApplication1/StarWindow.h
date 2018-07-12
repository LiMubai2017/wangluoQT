#pragma once

#include <QWidget>
#include <qlistwidget.h>
#include "ui_StarWindow.h"
#include<webItem.h>

class StarWindow : public QWidget
{
	Q_OBJECT

public:
	StarWindow(QWidget *parent = Q_NULLPTR);
	void showGame();
	void showSport();
	void showLife();
	void showCartoon();
	void showScience();
	void showStudy();
	void showMovie();
	void showTravel();
	void showReading();
	void showEMail();
	~StarWindow();

private:
	QWidget * lastPage;

	void loadGame();
	void loadSport();
	void loadLife();
	void loadCartoon();
	void loadScience();
	void loadStudy();
	void loadMovie();
	void loadTravel();
	void loadReading();
	void loadEMail();



	void addItem(QStringList *url, QStringList *image, QListWidget *qListWidget);

	Ui::StarWindow ui;
};
