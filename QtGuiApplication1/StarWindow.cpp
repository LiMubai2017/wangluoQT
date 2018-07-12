#include "StarWindow.h"

StarWindow::StarWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.cartoonListWidget->hide();
	ui.emailListWidget->hide();
	ui.gameListWidget->hide();
	ui.lifeListWidget->hide();
	ui.movieListWidget->hide();
	ui.readingListWidget->hide();
	ui.scienceListWidget->hide();
	ui.sportListWidge->hide();
	ui.studyListWidget->hide();
	ui.travelListWidget->hide();

	lastPage = ui.cartoonListWidget;

	loadGame();
	loadSport();
	loadLife();
	loadCartoon();
	loadScience();
	loadStudy();
	loadMovie();
	loadTravel();
	loadReading();
	loadEMail();
}

void StarWindow::addItem(QStringList *url, QStringList *image,QListWidget *qListWidget)
{
	for (int i = 0; i < url->size(); i += 2) {
		webItem *item = new webItem(this);
		QListWidgetItem *tempitem = new QListWidgetItem();
		tempitem->setSizeHint(QSize(940, 260));
		qListWidget->addItem(tempitem);
		qListWidget->setItemWidget(tempitem, item);

		if (i + 1 < url->size()) {
			item->setData(url->at(i), QPixmap(image->at(i)), url->at(i + 1), QPixmap(image->at(i + 1)));
		}
		else {
			item->setData(url->at(i), QPixmap(image->at(i)), "", QPixmap(""));
		}
		item->setWindow(parentWidget());
	}
}

void StarWindow:: loadGame()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "https://store.steampowered.com/"; *url << "http://www.vgtime.com/s/steam/"; *url << "http://www.tgbus.com/"; *url << "http://www.duowan.com/";
	*url << "http://game.qq.com/"; *url << "http://www.gamersky.com/"; *url << "https://www.17173.com/";
	*image << "Resources/steam.png"; *image << "Resources/youxishiguang.png"; *image << "Resources/dianwanbashi.png"; *image << "Resources/duowanyouxi.png";
	*image << "Resources/tengxunyouxi.png"; *image << "Resources/youminxingkong.png"; *image << "Resources/17173.png";
	addItem(url, image,ui.gameListWidget);
}
void StarWindow:: loadSport()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "http://sports.cctv.com/"; *url << "http://sports.ifeng.com/"; *url << "https://nba.hupu.com/"; *url << "http://sports.qq.com/";
	*url << "http://www.titan24.com/"; *url << "http://2018.sina.com.cn/";
	*image << "Resources/cctvsport.png"; *image << "Resources/fenghuangwangtiyv.png"; *image << "Resources/hupu.png"; *image << "Resources/tengxuntiyv.png";
	*image << "Resources/titan.png"; *image << "Resources/xinlangtiyv.png";
	addItem(url, image,ui.sportListWidge);
}
void StarWindow:: loadLife()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "https://wh.nuomi.com/"; *url << "http://www.dianping.com/"; *url << "https://www.douban.com/location/wuhan/"; *url << "http://www.dianping.com/"; *url << "https://www.meishichina.com/";
	*url << "https://www.smzdm.com/list/"; *url << "http://wh.58.com/"; *url << "http://www.tuniu.com/"; *url << "http://www.ctrip.com/";
	*image << "Resources/baidunuomi.png"; *image << "Resources/dazhongdianping"; *image << "Resources/doubantongcheng.png"; *image << "Resources/koubei.png"; *image << "Resources/meishitianxia.png";
	*image << "Resources/shenmezhidemai.png"; *image << "Resources/tongcheng.png"; *image << "Resources/tuniu.png"; *image << "Resources/xiecheng.png";
	addItem(url, image,ui.lifeListWidget);
}
void StarWindow:: loadCartoon()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "https://www.bilibili.com/"; *url << "http://ac.qq.com/"; *url << "http://donghua.dmzj.com/"; *url << "http://www.u17.com/";
	*image << "Resources/bilibili.png"; *image << "Resources/tencentDongman.png"; *image << "Resources/dongmanzhijia.png"; *image << "Resources/youyaoqi.jpg";
	addItem(url, image,ui.cartoonListWidget);
}
void StarWindow:: loadScience()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "http://www.51cto.com/"; *url << "https://www.csdn.net/"; *url << "https://www.guokr.com/"; *url << "http://www.sciencenet.cn/"; *url << "http://www.scicn.net/index.html"; *url << "http://www.natureasia.com/";
	*url << "https://www.v2ex.com/"; *url << "http://apps.webofknowledge.com/UA_GeneralSearch_input.do?product=UA&search_mode=GeneralSearch&SID=8DYP1JypHSZIYkMvSZy&preferencesSaved=";
	*image << "Resources/51cto.png"; *image << "Resources/csdn.png"; *image << "Resources/guoke.png"; *image << "Resources/kexuewang.png"; *image << "Resources/ziranzhongguo.png"; *image << "Resources/natureasia.png";
	*image << "Resources/v2ex.png"; *image << "Resources/webofscience.png";
	addItem(url, image,ui.scienceListWidget);
}
void StarWindow:: loadStudy()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "http://xueshu.baidu.com"; *url << "https://www.engineeringvillage.com/search/quick.url"; *url << "https://link.springer.com/";
	*url << "http://www.cqvip.com/"; *url << "https://www.wikipedia.org/";
	*image << "Resources/baiduxueshu.png"; *image << "Resources/engineeringvillage.png"; *image << "Resources/springerlink.png";
	*image << "Resources/weipu.png"; *image << "Resources/weiji.png";
	addItem(url, image,ui.studyListWidget);
}
void StarWindow:: loadMovie()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "http://www.iqiyi.com/dianying/"; *url << "https://maoyan.com/"; *url << "https://movie.douban.com/"; *url << "http://www.mtime.com/";
	*url << "https://www.taopiaopiao.com/";
	*image << "Resources/aiqiyi.png"; *image << "Resources/maoyan.png"; *image << "Resources/doubanMovie.png"; *image << "Resources/shiguangwang.png";
	*image << "Resources/taopiaopiao.png";
	addItem(url, image,ui.movieListWidget);
}
void StarWindow:: loadTravel()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "http://chanyouji.com/trips#home-trips"; 
	*image << "Resources/chanyouji.png"; 
	addItem(url, image,ui.travelListWidget);
}
void StarWindow:: loadReading()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "https://book.douban.com/"; *url << "https://meiriyiwen.com/"; *url << "https://www.qidian.com/"; *url << "http://book.qq.com/"; *url << "https://www.sanwen.net/";
	*url << "http://yuedu.163.com/"; *url << "https://www.readnovel.com/"; *url << "http://www.chinaqking.com/";
	*image << "Resources/doubandushu.png"; *image << "Resources/meiriyiwen.png"; *image << "Resources/qidianzhongwenwang.png"; *image << "Resources/qqyuedu.png"; *image << "Resources/sanwenwang.png";
	*image << "Resources/wangyiyunyuedu.png"; *image << "Resources/xiaoshuoyueduwang.png"; *image << "Resources/zhongguoqikan.png";
	addItem(url, image,ui.readingListWidget);
}
void StarWindow:: loadEMail()
{
	QStringList *url = new QStringList();
	QStringList *image = new QStringList();

	*url << "https://www.google.com/intl/zh-CN/gmail/about/"; *url << "https://www.126.com/"; *url << "https://www.google.com/intl/zh-CN/gmail/about/"; *url << "https://mail.qq.com/";
	*image << "Resources/gmail.png"; *image << "Resources/wangyiyouxiang.png"; *image << "Resources/xinlangyouxiang.png"; *image << "Resources/qqyouxiang.png";
	addItem(url, image,ui.emailListWidget);
}

void StarWindow::showGame()
{
	lastPage->hide();
	lastPage = ui.gameListWidget;
	ui.gameListWidget->show();
	
}
void StarWindow::showSport()
{
	lastPage->hide();
	lastPage = ui.sportListWidge;
	ui.sportListWidge->show();
	
}
void StarWindow::showLife()
{
	lastPage->hide();
	lastPage = ui.lifeListWidget;
	ui.lifeListWidget->show();
	
}
void StarWindow::showCartoon()
{
	lastPage->hide();
	lastPage = ui.cartoonListWidget;
	ui.cartoonListWidget->show();
}
void StarWindow::showScience()
{
	lastPage->hide();
	lastPage = ui.scienceListWidget;
	ui.scienceListWidget->show();
}
void StarWindow::showStudy()
{
	lastPage->hide();
	lastPage = ui.studyListWidget;
	ui.studyListWidget->show();
}
void StarWindow::showMovie()
{
	lastPage->hide();
	lastPage = ui.movieListWidget;
	ui.movieListWidget->show();
}
void StarWindow::showTravel()
{
	lastPage->hide();
	lastPage = ui.travelListWidget;
	ui.travelListWidget->show();
}
void StarWindow::showReading()
{
	lastPage->hide();
	lastPage = ui.readingListWidget;
	ui.readingListWidget->show();
}
void StarWindow::showEMail()
{
	lastPage->hide();
	lastPage = ui.emailListWidget;
	ui.emailListWidget->show();
}



StarWindow::~StarWindow()
{
}
