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
int Dejurniy::exec(void){
    int r=0;
    //ui->label->setText("Problem");
   ui->lineEdit->setPlaceholderText("Фио дежурнуго");
    r=QDialog::exec();

    return r;
}
void Dejurniy::on_pushButton_clicked()
{
    auto vvod = new Vvod_ID (this);
    vvod->exec();
    accept();
}
