#include "QtRabbion.h"
#include "SARibbonBar.h"
#include "SARibbonCategory.h"
#include <QTextEdit>
#include <QTimer>


void QtRabbion::setupRibbonTheme() {
    QTimer::singleShot(0, this, [this]() {
        this->setRibbonTheme(SARibbonTheme::RibbonThemeOffice2021Blue);
        });
}

QtRabbion::QtRabbion(QWidget* par, SARibbonMainWindowStyles style) : SARibbonMainWindow(par, style)
//QtRabbion::QtRabbion(QWidget* par) : SARibbonMainWindow(par)
{
	setWindowTitle(("ribbon use native frame test[*]"));
	setWindowModified(true);
	mTextedit = new QTextEdit(this);
	setCentralWidget(mTextedit);
	//setStatusBar(new QStatusBar());

	SARibbonBar* ribbon = ribbonBar();
    this->setRibbonTheme(SARibbonTheme::RibbonThemeOffice2016Blue);
	//! 通过setContentsMargins设置ribbon四周的间距
	ribbon->setContentsMargins(5, 0, 5, 0);

	connect(ribbon, &SARibbonBar::actionTriggered, this, [this](QAction* action) {
		mTextedit->append(QString("action object name=%1 triggered").arg(action->objectName()));
		});

	

    /////////////////////////////////////////
    setupRibbonTheme();
    /////////////////////////////////////////

    createCategoryPages();
    ////////////////////////////////////////


	//setMinimumWidth(500);
	QRect screenGeometry = QGuiApplication::primaryScreen()->availableGeometry();
	int screenWidth = screenGeometry.width();
	int screenHeight = screenGeometry.height();
    // 建议替换部分
    double scale = 0.85;  // 缩放比例：85%
    int targetWidth = static_cast<int>(screenWidth * scale);
    int targetHeight = static_cast<int>(screenHeight * scale);
    resize(targetWidth, targetHeight);
    move((screenWidth - targetWidth) / 2, (screenHeight - targetHeight) / 2);

	setWindowIcon(QIcon("./img/SA.svg"));

	connect(ribbon, &SARibbonBar::currentRibbonTabChanged, this, [this](int v) {
		mTextedit->append(QString("SARibbonBar::currentRibbonTabChanged(%1)").arg(v));
		});
	//! 全屏显示
	showMaximized();
}

QtRabbion::~QtRabbion() {}





void QtRabbion::createCategoryPages() {
    // 几何类别
    SARibbonCategory* geo_Page = ribbonBar()->addCategoryPage(tr("几何"));
    geo_Page->setObjectName("geo_Page");
    SARibbonPannel* geoPanel = geo_Page->addPannel(tr("基础体"));
    geoPanel->addLargeAction(new QAction(QIcon("./img/box.png"), tr("立方体"), this));
    geoPanel->addLargeAction(new QAction(QIcon("./img/cylinder.png"), tr("圆柱"), this));
    geoPanel->addLargeAction(new QAction(QIcon("./img/sphere.png"), tr("球体"), this));
    geoPanel->addLargeAction(new QAction(QIcon("./img/torus.png"), tr("环面"), this));


    SARibbonPannel* viewPanel = geo_Page->addPannel(tr("视角"));
   /* QAction* actXPlus = new QAction(tr("X+"), this);
    QAction* actXMinus = new QAction(tr("X-"), this);
    QAction* actYPlus = new QAction(tr("Y+"), this);
    QAction* actYMinus = new QAction(tr("Y-"), this);
    QAction* actZPlus = new QAction(tr("Z+"), this);
    QAction* actZMinus = new QAction(tr("Z-"), this);*/




    viewPanel->addLargeAction(new QAction(QIcon("./img/xPlus.png"), tr("xPlus"), this));
    viewPanel->addLargeAction(new QAction(QIcon("./img/yMinus.png"), tr("yMinus"), this));
    viewPanel-> addLargeAction(new QAction(QIcon("./img/yPlus.png"), tr("yPlus"), this));
    viewPanel-> addLargeAction(new QAction(QIcon("./img/zMinus.png"), tr("zMinus"), this));
    //viewPanel-> addLargeAction(new QAction(QIcon("./img/box.png"), tr("立方体"), this));;
    //viewPanel-> addLargeAction(new QAction(QIcon("./img/box.png"), tr("立方体"), this));


  

    //// 网格类别
    //SARibbonCategory* mesh_Page = ribbonBar()->addCategoryPage(tr("网格"));
    //mesh_Page->setObjectName("mesh_Page");

    //// 求解类别
    //SARibbonCategory* solution_Page = ribbonBar()->addCategoryPage(tr("求解"));

    //// 帮助类别
    //SARibbonCategory* help_Page = ribbonBar()->addCategoryPage(tr("帮助"));
}



