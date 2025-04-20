#pragma once

#include <QtWidgets/QMainWindow>
#include "SARibbonMainWindow.h"
//#include "graph3DWindow.h"
#include "ui_QtRabbion.h"


class SARibbonCategory;
class SARibbonPannel;
class QTextEdit;

class QtRabbion : public SARibbonMainWindow
{
    Q_OBJECT
public:
    QtRabbion(QWidget* par = nullptr,
        SARibbonMainWindowStyles style = { static_cast<int>(SARibbonMainWindowStyleFlag::UseRibbonFrame)
                                           | static_cast<int>(SARibbonMainWindowStyleFlag::UseRibbonMenuBar) });
    ~QtRabbion();  // 析构函数
   

private:
    // 初始化 Ribbon 工具栏
    //void createRibbon();

    // 创建 Ribbon 页和各个类别
    void createCategoryPages();

    void setupRibbonTheme();
    QTextEdit* mTextedit{ nullptr };
   


private:
    Ui::QtRabbionClass ui;  // UI 类的实例，用于访问 Qt Designer 设计的 UI 组件
    //graph3DWindow* _simpleWindow = nullptr;
};
