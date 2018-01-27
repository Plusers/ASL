#include "imagesettings.h"
#include "ui_imagesettings.h"

Imagesettings::Imagesettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Imagesettings)
{
    ui->setupUi(this);
}

Imagesettings::~Imagesettings()
{
    delete ui;
}
