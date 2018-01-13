#include "History_of_book/book_history.h"
#include "ui_book_history.h"
//#include "History_of_book/book_history_end.h"
Book_history::Book_history(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Book_history)
{
    ui->setupUi(this);
}

Book_history::~Book_history()
{
    delete ui;
}

void Book_history::on_pushButton_clicked()
{

    accept();
}
