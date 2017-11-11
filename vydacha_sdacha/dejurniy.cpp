#include "vydacha_sdacha/dejurniy.h"
#include "ui_dejurniy.h"

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
