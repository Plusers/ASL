#include "vydacha_sdacha/dejurniy.h"
#include "ui_dejurniy.h"
#include "vydacha_sdacha/vvod_id.h"
Dejurniy::Dejurniy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dejurniy)
{
    ui->setupUi(this);
}

Dejurniy::~Dejurniy()
{
    delete ui;
}

void Dejurniy::on_pushButton_clicked()
{
    auto vvod = new Vvod_ID (this);
    vvod->exec();
    accept();
}
