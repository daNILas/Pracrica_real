#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWindow *wind = new MyWindow;
    wind->show();

    return a.exec();
}
