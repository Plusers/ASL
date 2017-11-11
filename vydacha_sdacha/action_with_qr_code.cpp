#include "vydacha_sdacha/action_with_qr_code.h"
#include "ui_action_with_qr_code.h"
#include "vydacha_sdacha/uslovie.h"
#include "vydacha_sdacha/qr_code_unread.h"
Action_with_QR_code::Action_with_QR_code(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Action_with_QR_code)
{
    ui->setupUi(this);
}

Action_with_QR_code::~Action_with_QR_code()
{
    delete ui;
}

void Action_with_QR_code::on_pushButton_clicked()
{
    auto usl = new Uslovie (this);
    usl->exec();
    accept();
}

void Action_with_QR_code::on_pushButton_2_clicked()
{
    auto usl1 = new QR_code_unread(this);
    usl1->exec();

}
