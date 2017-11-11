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

void Vvod_ID::on_pushButton_clicked()
{
    auto act = new Action_with_QR_code (this);
    act->exec();
    accept();
}
