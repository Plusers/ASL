#include "vydacha_sdacha/vvod_id.h"
#include "ui_vvod_id.h"
#include "vydacha_sdacha/action_with_qr_code.h"
Vvod_ID::Vvod_ID(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vvod_ID)
{
    ui->setupUi(this);
}

Vvod_ID::~Vvod_ID()
{
    delete ui;
}
int Vvod_ID::exec(void){
    int r=0;
    //ui->label->setText("Problem");
   ui->lineEdit->setPlaceholderText("Введите ID ученика");
   ui->lineEdit_2->setPlaceholderText("Введите количество выдаваемых/сдаваемых книг");
    r=QDialog::exec();

    return r;
}
void Vvod_ID::on_pushButton_clicked()
{
    auto act = new Action_with_QR_code (this);
    act->exec();
    accept();
}
