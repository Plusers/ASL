#include "vydacha_sdacha/qr_code_unread.h"
#include "ui_qr_code_unread.h"

QR_code_unread::QR_code_unread(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QR_code_unread)
{
    ui->setupUi(this);
}

QR_code_unread::~QR_code_unread()
{
    delete ui;
}
