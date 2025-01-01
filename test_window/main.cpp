#include "mainwindow.hpp"
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.setWindowTitle("第一个窗口");
    mainWindow.show();

    return app.exec();
}
