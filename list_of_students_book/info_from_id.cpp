#include "list_of_students_book/info_from_id.h"
#include "ui_info_from_id.h"

Info_from_ID::Info_from_ID(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Info_from_ID)
{
    ui->setupUi(this);
}

Info_from_ID::~Info_from_ID()
{
    delete ui;
}

void Info_from_ID::on_pushButton_clicked()
{
    accept();
}
