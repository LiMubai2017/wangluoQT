#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>
#include <HotWindowClass.h>

#include <QTextCodec> 

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication1 w;


	QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
	w.show();


	return a.exec();
}
