#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vydacha_sdacha/dejurniy.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    auto dej = new Dejurniy(this);
    dej->exec();
}
