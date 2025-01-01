// #include "mainwindow.hpp"
// #include <QApplication>

// int main(int argc, char* argv[])
// {
//     QApplication app(argc, argv);

//     MainWindow mainWindow;
//     mainWindow.show();

//     return app.exec();
// }

#include <QApplication>
#include <QDebug>
#include <QFontDatabase>
#include <QMainWindow>
#include <qapplication.h>
#include <qdebug.h>
#include <qlabel.h>
#include <qmainwindow.h>

int main(int argc, char** argv)
{

    QApplication app(argc, argv);

    QMainWindow mainWin;
    mainWin.setWindowTitle("主窗口");
    mainWin.setGeometry(500, 500, 600, 400);

    QLabel* label = new QLabel;
    label->setText("主标签");
    mainWin.setCentralWidget(label);

    mainWin.show();

    return app.exec();
}