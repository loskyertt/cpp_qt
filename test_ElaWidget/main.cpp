#include "mainwindow.hpp"
#include <ElaApplication.h>
#include <ElaWindow.h>
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    ElaApplication::getInstance()->init();
    ElaWindow w;
    w.show();

    return app.exec();
}
