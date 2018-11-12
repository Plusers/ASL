#include "vydacha_sdacha/vvod_id.h"
#include "ui_vvod_id.h"
#include "vydacha_sdacha/action_with_qr_code.h"

#include "models/storagemodel.h"
#include <QDialog>
#include <QDialogButtonBox>
#include <QTableView>
#include <QMessageBox>
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
int Vvod_ID::exec(void){
    int r=0;
    //ui->label->setText("Problem");
   ui->name->setPlaceholderText("Введите Имя ученика");
   ui->fename->setPlaceholderText("Введите Фамилию ученика");
   ui->third_name->setPlaceholderText("Введите Отчество ученика");
    r=QDialog::exec();

    return r;
}


void Vvod_ID::on_search_button_clicked()
{

    //поиск ученика в таблице
    //если найден
        //auto true_act = new True_Search(this);
        //true_act->exec();
    //если не найден
        //auto false_act = new False_Search(this);
        //false_act->exec();
}
