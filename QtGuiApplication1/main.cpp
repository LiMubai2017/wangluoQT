#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>
#include <HotWindowClass.h>

#include <QTextCodec> 

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//加载静态启动画面
	/*QPixmap pix("Resources/logo.png");
	QSplashScreen splash(pix);
	splash.show();
	a.processEvents();*/

	//加载动态启动画面
	QPixmap pix("Resources/begin.gif");
	QSplashScreen splash(pix);
	QLabel splashlabel(&splash);
	QMovie splashgif("Resources/begin.gif");
	splashlabel.setMovie(&splashgif);
	splashgif.start();
	splash.show();
	splash.setCursor(Qt::BlankCursor);//不显示鼠标外观
	for (int i = 0; i<15000; i += splashgif.speed()) {
		QCoreApplication::processEvents();
		Sleep(splashgif.speed() / 5);
	}

	QtGuiApplication1 w;
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));


	w.show();

	splash.finish(&w);
	return a.exec();
}
