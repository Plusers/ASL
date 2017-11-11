#include "add_book/add_book_start.h"
#include "ui_add_book_start.h"
#include "add_book/add_book_end.h"

Add_book_start::Add_book_start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_book_start)
{
    ui->setupUi(this);
}

Add_book_start::~Add_book_start()
{
    delete ui;
}

void Add_book_start::on_pushButton_clicked()
{
    auto added = new Add_book_end(this);
    added->exec();
    accept();
}
