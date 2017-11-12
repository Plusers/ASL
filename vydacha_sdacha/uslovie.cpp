#include "vydacha_sdacha/uslovie.h"
#include "ui_uslovie.h"
#include "vydacha_sdacha/action_with_qr_code.h"
Uslovie::Uslovie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Uslovie)
{
    ui->setupUi(this);
}

Uslovie::~Uslovie()
{
    delete ui;
}

void Uslovie::on_pushButton_2_clicked()
{

    this->accept();

}

void Uslovie::on_pushButton_clicked()
{
    this->accept();
}
