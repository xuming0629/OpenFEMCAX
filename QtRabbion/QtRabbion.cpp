#include "QtRabbion.h"
#include "SARibbonBar.h"
#include "SARibbonCategory.h"
#include <QTextEdit>
#include <QTimer>

QtRabbion::QtRabbion(QWidget* parent)
    : SARibbonMainWindow(parent)
{
    setWindowIcon(QIcon("./img/SA.svg"));
    setMinimumWidth(500);
    showMaximized();

    // 设置应用程序按钮文本
    SARibbonBar* ribbon = ribbonBar();
    if (ribbon->applicationButton()) {
        ribbon->applicationButton()->setText(tr("文件"));
    }

    // 创建不同类别页面
    createCategoryPages();

    // 添加文本编辑框作为主界面
    QTextEdit* edit = new QTextEdit(this);
    setCentralWidget(edit);

    setMinimumWidth(500);
    showMaximized();

    QTimer::singleShot(0, this, [this]() {
        this->setRibbonTheme(SARibbonTheme::RibbonThemeOffice2016Blue);
        });
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



    // 网格类别
    SARibbonCategory* mesh_Page = ribbonBar()->addCategoryPage(tr("网格"));
    mesh_Page->setObjectName("mesh_Page");

    // 求解类别
    SARibbonCategory* solution_Page = ribbonBar()->addCategoryPage(tr("求解"));

    // 帮助类别
    SARibbonCategory* help_Page = ribbonBar()->addCategoryPage(tr("帮助"));
}


