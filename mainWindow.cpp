#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);  // Sets up the UI
}

MainWindow::~MainWindow()
{
    delete ui;  // Clean up when the window is destroyed
}
