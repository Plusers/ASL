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
int QR_code_unread::exec(void){
    int r=0;
    //ui->label->setText("Problem");
   ui->lineEdit->setPlaceholderText("Введите Артикул книги");
   ui->lineEdit_2->setPlaceholderText("Количество");
    r=QDialog::exec();

    return r;
}
void QR_code_unread::on_pushButton_clicked()
{
    accept();
}
