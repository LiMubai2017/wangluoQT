#include "QtGuiApplication1.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	hotWindow = new HotWindowClass(this);
	searchWindow = new SearchWindow(this);

	hotWindow->setMinimumSize(QSize(800, 1000));
	searchWindow->setMinimumSize(QSize(800, 1000));

	ui.searchScrollArea->setWidget(searchWindow);
	ui.hotScrollArea->setWidget(hotWindow);
	ui.searchScrollArea->hide();
	ui.starScrollArea->hide();
	//ui.hotScrollArea->hide();


	/*QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
	animation->setDuration(1000);
	animation->setStartValue(0);
	animation->setEndValue(1);
	animation->start();

	QPropertyAnimation *moveAnimation = new QPropertyAnimation(ui.searchButton, "geometry");
	moveAnimation->setDuration(1000);
	moveAnimation->setStartValue(QRect(0, 0, 240, 240));
	moveAnimation->setEndValue(QRect(0, 240, 240, 480));
	moveAnimation->setEasingCurve(QEasingCurve::OutBounce);

	QPropertyAnimation *alphaAnimation = new QPropertyAnimation(ui.starButton, "windowOpacity");
	alphaAnimation->setDuration(1000);
	alphaAnimation->setStartValue(0);
	alphaAnimation->setEndValue(1);
	
	QParallelAnimationGroup *paraGroup = new QParallelAnimationGroup(this);
	paraGroup->addAnimation(alphaAnimation);
	paraGroup->addAnimation(moveAnimation);
	paraGroup->start();*/
}





void QtGuiApplication1::searchClicked()
{
	//searchWindow = new SearchWindow(this);
	ui.starScrollArea->hide();
	ui.hotScrollArea->hide();
	ui.searchScrollArea->show();
}

void QtGuiApplication1::hotClicked()
{
	//hotWindow = new HotWindowClass(this);
	ui.hotScrollArea->show();
	ui.starScrollArea->hide();
	ui.searchScrollArea->hide();
}

void QtGuiApplication1::starClicked()
{


}
