/********************************************************************************
** Form generated from reading UI file 'HotWindowClass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTWINDOWCLASS_H
#define UI_HOTWINDOWCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HotWindowClass
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *netMusicHotLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *netMusicNewLayout;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *baiduLayout;
    QLabel *label_5;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *tiebaLayout;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *weiboLayout;
    QLabel *label_7;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *netMusicUpLayout;

    void setupUi(QWidget *HotWindowClass)
    {
        if (HotWindowClass->objectName().isEmpty())
            HotWindowClass->setObjectName(QStringLiteral("HotWindowClass"));
        HotWindowClass->resize(960, 2100);
        HotWindowClass->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(HotWindowClass);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 200, 251, 301));
        netMusicHotLayout = new QGridLayout(gridLayoutWidget);
        netMusicHotLayout->setSpacing(6);
        netMusicHotLayout->setContentsMargins(11, 11, 11, 11);
        netMusicHotLayout->setObjectName(QStringLiteral("netMusicHotLayout"));
        netMusicHotLayout->setHorizontalSpacing(1);
        netMusicHotLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(HotWindowClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 120, 250, 82));
        label->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/netMusicHot.png);"));
        label_2 = new QLabel(HotWindowClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 960, 80));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/hotTitle.png);"));
        label_3 = new QLabel(HotWindowClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 120, 250, 82));
        label_3->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/netMusicNew.png);"));
        verticalLayoutWidget = new QWidget(HotWindowClass);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(350, 200, 251, 301));
        netMusicNewLayout = new QVBoxLayout(verticalLayoutWidget);
        netMusicNewLayout->setSpacing(6);
        netMusicNewLayout->setContentsMargins(11, 11, 11, 11);
        netMusicNewLayout->setObjectName(QStringLiteral("netMusicNewLayout"));
        netMusicNewLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(HotWindowClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 550, 250, 82));
        label_4->setMinimumSize(QSize(250, 82));
        label_4->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/baidu.png);"));
        verticalLayoutWidget_2 = new QWidget(HotWindowClass);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(50, 630, 251, 301));
        baiduLayout = new QVBoxLayout(verticalLayoutWidget_2);
        baiduLayout->setSpacing(6);
        baiduLayout->setContentsMargins(11, 11, 11, 11);
        baiduLayout->setObjectName(QStringLiteral("baiduLayout"));
        baiduLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(HotWindowClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 550, 250, 82));
        label_5->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/tieba.png);"));
        verticalLayoutWidget_3 = new QWidget(HotWindowClass);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(350, 630, 251, 301));
        tiebaLayout = new QVBoxLayout(verticalLayoutWidget_3);
        tiebaLayout->setSpacing(6);
        tiebaLayout->setContentsMargins(11, 11, 11, 11);
        tiebaLayout->setObjectName(QStringLiteral("tiebaLayout"));
        tiebaLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(HotWindowClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(660, 550, 250, 82));
        label_6->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/weibo.png);"));
        verticalLayoutWidget_4 = new QWidget(HotWindowClass);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(650, 630, 261, 301));
        weiboLayout = new QVBoxLayout(verticalLayoutWidget_4);
        weiboLayout->setSpacing(6);
        weiboLayout->setContentsMargins(11, 11, 11, 11);
        weiboLayout->setObjectName(QStringLiteral("weiboLayout"));
        weiboLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(HotWindowClass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(660, 120, 250, 82));
        label_7->setStyleSheet(QStringLiteral("background-image: url(:/image/Resources/netMusicUp.png);"));
        verticalLayoutWidget_5 = new QWidget(HotWindowClass);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(660, 200, 251, 301));
        netMusicUpLayout = new QVBoxLayout(verticalLayoutWidget_5);
        netMusicUpLayout->setSpacing(6);
        netMusicUpLayout->setContentsMargins(11, 11, 11, 11);
        netMusicUpLayout->setObjectName(QStringLiteral("netMusicUpLayout"));
        netMusicUpLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(HotWindowClass);

        QMetaObject::connectSlotsByName(HotWindowClass);
    } // setupUi

    void retranslateUi(QWidget *HotWindowClass)
    {
        HotWindowClass->setWindowTitle(QApplication::translate("HotWindowClass", "HotWindowClass", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HotWindowClass: public Ui_HotWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTWINDOWCLASS_H
