#pragma once

#include <QtWidgets/QMainWindow>
#include "SARibbonMainWindow.h"
#include "ui_QtRabbion.h"

class SARibbonCategory;
class SARibbonPannel;

class QtRabbion : public SARibbonMainWindow
{
    Q_OBJECT

public:
    explicit QtRabbion(QWidget* parent = nullptr);  // 构造函数
    ~QtRabbion();  // 析构函数

private:
    // 初始化 Ribbon 工具栏
    void createRibbon();

    // 创建 Ribbon 页和各个类别
    void createCategoryPages();

private:
    Ui::QtRabbionClass ui;  // UI 类的实例，用于访问 Qt Designer 设计的 UI 组件
};
