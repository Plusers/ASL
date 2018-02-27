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

int Info_from_ID::exec(void){

    int r=0;
    //ui->label->setText("Problem");
    setPlaceholderText("123");
    r=QDialog::exec();

    return r;
};

void Info_from_ID ::setPlaceholderText(const QString&  ){
       ui->lineEdit->setPlaceholderText(QString("Введите ID ученика"));

}
void Info_from_ID::on_pushButton_clicked()
{
    accept();
}
