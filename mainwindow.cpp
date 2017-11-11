#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vydacha_sdacha/dejurniy.h"
#include "add_book/add_book_start.h"
#include "list_of_students_book/info_from_id.h"
#include "add_new_student/new_student.h"
#include "History_of_book/book_history.h"
#include "vydacha_sdacha/qr_code_unread.h"
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


void MainWindow::on_pushButton_2_clicked()
{
    auto dej1 = new Dejurniy(this);
    dej1->exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    auto add = new Add_book_start(this);
    add->exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    auto inf = new Info_from_ID(this);
    inf->exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    auto stud = new New_student(this);
    stud->exec();

}

void MainWindow::on_pushButton_6_clicked()
{
    auto hb = new Book_history(this);
    hb->exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    auto qr = new QR_code_unread(this);
    qr->exec();
}
