#include "History_of_book/book_history_end.h"
#include "ui_book_history_end.h"

Book_history_end::Book_history_end(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Book_history_end)
{
    ui->setupUi(this);
}

Book_history_end::~Book_history_end()
{
    delete ui;
}

void Book_history_end::on_pushButton_clicked()
{
    accept();
}
