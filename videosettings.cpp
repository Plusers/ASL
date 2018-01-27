#include "videosettings.h"
#include "ui_videosettings.h"

videosettings::videosettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::videosettings)
{
    ui->setupUi(this);
}

videosettings::~videosettings()
{
    delete ui;
}
