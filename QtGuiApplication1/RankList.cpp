#include "RankList.h"
using namespace std;
RankList::RankList(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.pushButton1->setStyleSheet("QPushButton{background-color:rgb(245, 245, 247);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240); }"
		"QPushButton:pressed{background-color:rgb(230, 230, 230); border-style: inset; }");
	ui.pushButton3->setStyleSheet("QPushButton{background-color:rgb(245, 245, 247);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240); }"
		"QPushButton:pressed{background-color:rgb(230, 230, 230); border-style: inset; }");
	ui.pushButton5->setStyleSheet("QPushButton{background-color:rgb(245, 245, 247);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240); }"
		"QPushButton:pressed{background-color:rgb(230, 230, 230); border-style: inset; }");
	ui.pushButton7->setStyleSheet("QPushButton{background-color:rgb(245, 245, 247);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240); }"
		"QPushButton:pressed{background-color:rgb(230, 230, 230); border-style: inset; }");
	ui.pushButton9->setStyleSheet("QPushButton{background-color:rgb(245, 245, 247);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240); }"
		"QPushButton:pressed{background-color:rgb(230, 230, 230); border-style: inset; }");

	ui.pushButton2->setStyleSheet("QPushButton{background-color:rgb(250, 250, 250);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240);}"
		"QPushButton:pressed{background-color:rgb(230, 230, 230); border-style: inset; }");
	ui.pushButton4->setStyleSheet("QPushButton{background-color:rgb(250, 250, 250);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240); }"
		"QPushButton:pressed{background-color:rgb(230, 230, 230); border-style: inset; }");
	ui.pushButton6->setStyleSheet("QPushButton{background-color:rgb(250, 250, 250);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240); }"
		"QPushButton:pressed{background-color:rgb(230, 230, 230);border-style: inset; }");
	ui.pushButton8->setStyleSheet("QPushButton{background-color:rgb(250, 250, 250);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240); }"
		"QPushButton:pressed{background-color:rgb(230, 230, 230);border-style: inset; }");
	ui.pushButton10->setStyleSheet("QPushButton{background-color:rgb(250, 250, 250);\
                                               font: 63 11pt ;border-color: rgb(245, 245, 247);text-align : left;border: 0px;}"
		"QPushButton:hover{background-color:rgb(240,240,240); }"
		"QPushButton:pressed{background-color:rgb(230, 230, 230); border-style: inset; }");

	setDefaultData();
	updataUI();
}

void RankList::setDefaultData()
{
	data = new QStringList();
	for (int i = 0; i <= 10; i++) {
		*data << QString(QStringLiteral("加载中")) << QString(QStringLiteral("请稍后")) << "http://www.baidu.com";
	}
}

void RankList::updataUI()
{
	ui.pushButton1->setText(QString("1 ") + data->at(0) + "  " + data->at(1));
	ui.pushButton2->setText(QString("2 ") + data->at(3) + "  " + data->at(4));
	ui.pushButton3->setText(QString("3 ") + data->at(6) + "  " + data->at(7));
	ui.pushButton4->setText(QString("4 ") + data->at(9) + "  " + data->at(10));
	ui.pushButton5->setText(QString("5 ") + data->at(12) + "  " + data->at(13));
	ui.pushButton6->setText(QString("6 ") + data->at(15) + "  " + data->at(16));
	ui.pushButton7->setText(QString("7 ") + data->at(18) + "  " + data->at(19));
	ui.pushButton8->setText(QString("8 ") + data->at(21) + "  " + data->at(22));
	ui.pushButton9->setText(QString("9 ") + data->at(24) + "  " + data->at(25));
	ui.pushButton10->setText(QString("10 ") + data->at(27) + "  " + data->at(28));
}

void RankList::setWindow(QWidget *window)
{
	this->window = window;
}

void RankList::setData(QStringList *data)
{
	this->data = data;
	updataUI();
}

void RankList::openWeb(QString url) {
	QWebEngineView *webView = new QWebEngineView();
	webView->setUrl(url);
	webView->setFixedHeight(720);
	webView->setFixedWidth(1200);
	webView->show();

	QPropertyAnimation *moveAnimation = new QPropertyAnimation(webView, "pos");
	moveAnimation->setDuration(1000);
	moveAnimation->setStartValue(QPoint(window->x(), 0));
	moveAnimation->setEndValue(QPoint(window->x(), window->y()));
	moveAnimation->setEasingCurve(QEasingCurve::OutBounce);
	moveAnimation->start();

	QPropertyAnimation *alphaAnimation = new QPropertyAnimation(webView, "windowOpacity");
	alphaAnimation->setDuration(1000);
	alphaAnimation->setStartValue(0);
	alphaAnimation->setEndValue(1);

	QParallelAnimationGroup *paraGroup = new QParallelAnimationGroup(this);
	paraGroup->addAnimation(alphaAnimation);
	paraGroup->addAnimation(moveAnimation);
	paraGroup->start();
}

void RankList::click1() { openWeb(data->at(2)); }
void RankList::click2() { openWeb(data->at(5)); }
void RankList::click3() { openWeb(data->at(8)); }
void RankList::click4() { openWeb(data->at(11)); }
void RankList::click5() { openWeb(data->at(14)); }
void RankList::click6() { openWeb(data->at(17)); }
void RankList::click7() { openWeb(data->at(20)); }
void RankList::click8() { openWeb(data->at(23)); }
void RankList::click9() { openWeb(data->at(26));}
void RankList::click10() { openWeb(data->at(29)); }

RankList::~RankList()
{
}
