#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;

    window.setWindowTitle(QString("Code Designer"));
    window.showMaximized();
    return app.exec();
}
