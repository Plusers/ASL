#include "true_search.h"
#include "ui_true_search.h"

True_Search::True_Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::True_Search)
{
    ui->setupUi(this);
}

True_Search::~True_Search()
{
    delete ui;
}
