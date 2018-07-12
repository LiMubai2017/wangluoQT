#include "QtGuiApplication1.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	hotWindow = new HotWindowClass(this);
	searchWindow = new SearchWindow(this);
	starWindow = new StarWindow(this);

	hotWindow->setMinimumSize(QSize(800, 2000));
	searchWindow->setMinimumSize(QSize(800, 3600));
	starWindow->setMinimumSize(QSize(780, 1000));

	ui.searchScrollArea->setWidget(searchWindow);
	ui.hotScrollArea->setWidget(hotWindow);
	ui.starScrollArea->setWidget(starWindow);
	ui.searchScrollArea->hide();
	ui.starScrollArea->hide();
	ui.hotScrollArea->hide();

	ui.label->setPixmap(QPixmap("Resources/logo.png"));

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


void QtGuiApplication1::showSearchItemButtons()
{
	QPropertyAnimation *moveAnimation = new QPropertyAnimation(ui.searchButton, "geometry");
	moveAnimation->setDuration(1000);
	moveAnimation->setStartValue(QRect(0, 240, 240, 240));
	moveAnimation->setEndValue(QRect(-160, 240, 240, 240));
	moveAnimation->setEasingCurve(QEasingCurve::OutBounce);
	moveAnimation->start();
}
void QtGuiApplication1::hideSearchItemButtons()
{
	QPropertyAnimation *moveAnimation = new QPropertyAnimation(ui.searchButton, "geometry");
	moveAnimation->setDuration(1000);
	moveAnimation->setStartValue(QRect(-160, 240, 240, 240));
	moveAnimation->setEndValue(QRect(0, 240, 240, 240));
	moveAnimation->setEasingCurve(QEasingCurve::OutBounce);
	moveAnimation->start();

	searchWindow->hideAll();
}

void QtGuiApplication1::showStarItemButtons()
{
	QPropertyAnimation *moveAnimation = new QPropertyAnimation(ui.starButton, "geometry");
	moveAnimation->setDuration(1000);
	moveAnimation->setStartValue(QRect(0, 480, 240, 240));
	moveAnimation->setEndValue(QRect(-180, 480, 240, 240));
	moveAnimation->setEasingCurve(QEasingCurve::OutBounce);
	moveAnimation->start();
}
void QtGuiApplication1::hideStarItemButtons()
{
	QPropertyAnimation *moveAnimation = new QPropertyAnimation(ui.starButton, "geometry");
	moveAnimation->setDuration(1000);
	moveAnimation->setStartValue(QRect(-180, 480, 240, 240));
	moveAnimation->setEndValue(QRect(0, 480, 240, 240));
	moveAnimation->setEasingCurve(QEasingCurve::OutBounce);
	moveAnimation->start();
}

void QtGuiApplication1::addClicked()
{
	searchWindow->showAdd();
}

 void QtGuiApplication1 :: weiboClicked()
 {
	 searchWindow->showWeibo();
 }
 void QtGuiApplication1 :: dongmanClicked()
 {
	 searchWindow->showDongman();
 }
 void QtGuiApplication1 :: shipinClicked()
 {
	 searchWindow->showShipin();
 }
 void QtGuiApplication1 :: zhihuClicked()
 {
	 searchWindow->showZhihu();
 }
 void QtGuiApplication1 :: qidianClicked()
 {
	 searchWindow->showQidian();
 }


void QtGuiApplication1::searchClicked()
{
	if (lastClicked == 3) hideStarItemButtons();
	lastClicked = 2;
	ui.starScrollArea->hide();
	ui.hotScrollArea->hide();
	ui.searchScrollArea->show();

	showSearchItemButtons();
}

void QtGuiApplication1::hotClicked()
{
	if (lastClicked == 2) hideSearchItemButtons();
	if (lastClicked == 3) hideStarItemButtons();
	lastClicked = 1;
	ui.hotScrollArea->show();
	ui.starScrollArea->hide();
	ui.searchScrollArea->hide();
}

void QtGuiApplication1::starClicked()
{
	if (lastClicked == 2) hideSearchItemButtons();
	
	lastClicked = 3;

	ui.hotScrollArea->hide();
	ui.starScrollArea->show();
	ui.searchScrollArea->hide();

	showStarItemButtons();
}

void QtGuiApplication1::gameClicked() { starWindow->showGame(); }
void QtGuiApplication1:: sportClicked(){ starWindow->showSport(); }
void QtGuiApplication1:: lifeClicked(){ starWindow->showLife(); }
void QtGuiApplication1:: cartoonClicked(){ starWindow->showCartoon(); }
void QtGuiApplication1:: scienceClicked(){ starWindow->showScience(); }
void QtGuiApplication1:: studyClicked(){ starWindow->showStudy(); }
void QtGuiApplication1:: movieClicked(){ starWindow->showMovie(); }
void QtGuiApplication1:: travelClicked(){ starWindow->showTravel(); }
void QtGuiApplication1:: readingClicked(){ starWindow->showReading(); }
void QtGuiApplication1::emailClicked() { starWindow->showEMail(); }
