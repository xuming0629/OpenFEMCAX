#include <QApplication>
#include <QFontDatabase>
#include <QFont>
#include "QtRabbion.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    // 加载字体文件
    QString fontPath = QCoreApplication::applicationDirPath() + "/font/msyh.ttc";
    int fontId = QFontDatabase::addApplicationFont(fontPath);
    if (fontId != -1) {
        QString fontFamily = QFontDatabase::applicationFontFamilies(fontId).at(0);
        QFont font(fontFamily, 10);
        a.setFont(font);
    }
    else {
        QFont fallbackFont("Microsoft YaHei", 10);
        a.setFont(fallbackFont);
    }

    QtRabbion w;
    w.show();
    return a.exec();
}
