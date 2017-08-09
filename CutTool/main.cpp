#include "cutmain.h"
#include <QApplication>
#include<windows.h>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    CutMain w;
    w.setWindowOpacity(0.9);
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.show();

    return a.exec();
}
