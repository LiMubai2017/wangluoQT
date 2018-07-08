/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1Class
{
public:
    QWidget *centralWidget;
    QPushButton *hotButton;
    QPushButton *starButton;
    QScrollArea *hotScrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *searchButton;
    QScrollArea *searchScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QScrollArea *starScrollArea;
    QWidget *scrollAreaWidgetContents_3;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QStringLiteral("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(1200, 719);
        centralWidget = new QWidget(QtGuiApplication1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color:rgb(48, 118, 172)"));
        hotButton = new QPushButton(centralWidget);
        hotButton->setObjectName(QStringLiteral("hotButton"));
        hotButton->setGeometry(QRect(0, 0, 240, 240));
        hotButton->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/hot.png);"));
        starButton = new QPushButton(centralWidget);
        starButton->setObjectName(QStringLiteral("starButton"));
        starButton->setGeometry(QRect(0, 480, 240, 240));
        starButton->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/star.png);"));
        hotScrollArea = new QScrollArea(centralWidget);
        hotScrollArea->setObjectName(QStringLiteral("hotScrollArea"));
        hotScrollArea->setGeometry(QRect(240, 0, 960, 721));
        hotScrollArea->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        hotScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1000, 10000));
        scrollAreaWidgetContents->setMinimumSize(QSize(1000, 10000));
        hotScrollArea->setWidget(scrollAreaWidgetContents);
        searchButton = new QPushButton(centralWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(0, 240, 240, 240));
        searchButton->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/search.png);"));
        searchScrollArea = new QScrollArea(centralWidget);
        searchScrollArea->setObjectName(QStringLiteral("searchScrollArea"));
        searchScrollArea->setGeometry(QRect(240, 0, 960, 721));
        searchScrollArea->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        searchScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1000, 10000));
        scrollAreaWidgetContents_2->setMinimumSize(QSize(1000, 10000));
        searchScrollArea->setWidget(scrollAreaWidgetContents_2);
        starScrollArea = new QScrollArea(centralWidget);
        starScrollArea->setObjectName(QStringLiteral("starScrollArea"));
        starScrollArea->setGeometry(QRect(240, 0, 960, 721));
        starScrollArea->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        starScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1000, 10000));
        scrollAreaWidgetContents_3->setMinimumSize(QSize(1000, 10000));
        starScrollArea->setWidget(scrollAreaWidgetContents_3);
        QtGuiApplication1Class->setCentralWidget(centralWidget);
        hotButton->raise();
        starButton->raise();
        searchButton->raise();
        hotScrollArea->raise();
        searchScrollArea->raise();
        starScrollArea->raise();

        retranslateUi(QtGuiApplication1Class);
        QObject::connect(searchButton, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(searchClicked()));
        QObject::connect(hotButton, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(hotClicked()));
        QObject::connect(starButton, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(starClicked()));

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "QtGuiApplication1", Q_NULLPTR));
        hotButton->setText(QString());
        starButton->setText(QString());
        searchButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
