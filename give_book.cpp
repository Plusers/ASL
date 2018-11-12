#include "give_book.h"
#include "ui_give_book.h"

give_book::give_book(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::give_book)
{
    ui->setupUi(this);
}

give_book::~give_book()
{
    delete ui;
}

