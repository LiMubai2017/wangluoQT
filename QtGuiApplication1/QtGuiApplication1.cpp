#include "QtGuiApplication1.h"
#include <QtWebEngineWidgets>
#include <HotWindowClass.h>


QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	HotWindowClass *hotWindow = new HotWindowClass(this);

	ui.setupUi(this);

	ui.githubButton->hide();
	ui.wechatButton->hide();
	ui.weiboButton->hide();
	
	hotWindow->setMinimumSize(QSize(800, 3000));
	ui.scrollArea->setWidget(hotWindow);

	/*QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
	animation->setDuration(1000);
	animation->setStartValue(0);
	animation->setEndValue(1);
	animation->start();*/

	/*QPropertyAnimation *moveAnimation = new QPropertyAnimation(ui.searchButton, "geometry");
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
	
	
}
