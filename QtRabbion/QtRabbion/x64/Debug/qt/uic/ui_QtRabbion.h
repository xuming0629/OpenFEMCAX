/********************************************************************************
** Form generated from reading UI file 'QtRabbion.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRABBION_H
#define UI_QTRABBION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtRabbionClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtRabbionClass)
    {
        if (QtRabbionClass->objectName().isEmpty())
            QtRabbionClass->setObjectName("QtRabbionClass");
        QtRabbionClass->resize(600, 400);
        menuBar = new QMenuBar(QtRabbionClass);
        menuBar->setObjectName("menuBar");
        QtRabbionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtRabbionClass);
        mainToolBar->setObjectName("mainToolBar");
        QtRabbionClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtRabbionClass);
        centralWidget->setObjectName("centralWidget");
        QtRabbionClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtRabbionClass);
        statusBar->setObjectName("statusBar");
        QtRabbionClass->setStatusBar(statusBar);

        retranslateUi(QtRabbionClass);

        QMetaObject::connectSlotsByName(QtRabbionClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtRabbionClass)
    {
        QtRabbionClass->setWindowTitle(QCoreApplication::translate("QtRabbionClass", "QtRabbion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtRabbionClass: public Ui_QtRabbionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRABBION_H
