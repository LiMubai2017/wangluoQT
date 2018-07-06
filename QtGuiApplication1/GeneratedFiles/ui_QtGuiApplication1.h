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
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *wechatButton;
    QPushButton *githubButton;
    QPushButton *weiboButton;
    QPushButton *searchButton;

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
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(240, 0, 960, 721));
        scrollArea->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1000, 10000));
        scrollAreaWidgetContents->setMinimumSize(QSize(1000, 10000));
        scrollArea->setWidget(scrollAreaWidgetContents);
        wechatButton = new QPushButton(centralWidget);
        wechatButton->setObjectName(QStringLiteral("wechatButton"));
        wechatButton->setGeometry(QRect(0, 240, 240, 80));
        wechatButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 120, 215);\n"
"font: 12pt \"\351\273\221\344\275\223\";"));
        githubButton = new QPushButton(centralWidget);
        githubButton->setObjectName(QStringLiteral("githubButton"));
        githubButton->setGeometry(QRect(0, 320, 240, 80));
        githubButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 120, 215);\n"
"font: 12pt \"\351\273\221\344\275\223\";"));
        weiboButton = new QPushButton(centralWidget);
        weiboButton->setObjectName(QStringLiteral("weiboButton"));
        weiboButton->setGeometry(QRect(0, 400, 240, 80));
        weiboButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 120, 215);\n"
"font: 12pt \"\351\273\221\344\275\223\";"));
        searchButton = new QPushButton(centralWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(0, 240, 240, 240));
        searchButton->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/search.png);"));
        QtGuiApplication1Class->setCentralWidget(centralWidget);
        weiboButton->raise();
        githubButton->raise();
        wechatButton->raise();
        hotButton->raise();
        starButton->raise();
        searchButton->raise();
        scrollArea->raise();

        retranslateUi(QtGuiApplication1Class);
        QObject::connect(searchButton, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(searchClicked()));

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "QtGuiApplication1", Q_NULLPTR));
        hotButton->setText(QString());
        starButton->setText(QString());
        wechatButton->setText(QApplication::translate("QtGuiApplication1Class", "\345\276\256\344\277\241\345\205\254\344\274\227\345\217\267\350\277\275\350\270\252", Q_NULLPTR));
        githubButton->setText(QApplication::translate("QtGuiApplication1Class", "GitHub\346\233\264\346\226\260\350\277\275\350\270\252", Q_NULLPTR));
        weiboButton->setText(QApplication::translate("QtGuiApplication1Class", "\345\276\256\345\215\232\347\224\250\346\210\267\346\233\264\346\226\260", Q_NULLPTR));
        searchButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
