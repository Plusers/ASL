#include "add_book/add_book_end.h"
#include "ui_add_book_end.h"

Add_book_end::Add_book_end(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_book_end)
{
    ui->setupUi(this);
}

Add_book_end::~Add_book_end()
{
    delete ui;
}

void Add_book_end::on_pushButton_clicked()
{
    accept();
}
