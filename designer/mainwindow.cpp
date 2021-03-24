#include "mainwindow.h"
#include <QMainWindow>
#include <QDockWidget>
#include <QLabel>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //window = new QMainWindow(this);
    graphMaker = new QGridLayout();



}

MainWindow::~MainWindow()
{
   //delete window;
}

