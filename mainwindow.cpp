#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vydacha_sdacha/dejurniy.h"
#include "add_book/add_book_start.h"
#include "list_of_students_book/info_from_id.h"
#include "add_new_student/new_student.h"
#include "History_of_book/book_history.h"
#include "vydacha_sdacha/qr_code_unread.h"
#include "models/storagemodel.h"
#include "filedownloader.h"
#include "menu.h"


#include <QDialog>
#include <QDialogButtonBox>
#include <QTableView>
#include <QUrl>
#include <QMessageBox>

//#include <qrwidget.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    showDemo();
//    showQrEncode();

}

MainWindow::~MainWindow()
{

    delete ui;
}


//void QWidget::setWindowTitle(const QString &)



void MainWindow::on_menubutton_clicked()
{
    auto menu= new Menu(this);
    menu->show();
}

void MainWindow::on_exit_button_clicked()
{
    close();
}

void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    
}
