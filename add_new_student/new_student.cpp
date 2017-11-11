#include "add_new_student/new_student.h"
#include "ui_new_student.h"

New_student::New_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::New_student)
{
    ui->setupUi(this);
}

New_student::~New_student()
{
    delete ui;
}

void New_student::on_pushButton_clicked()
{
    accept();
}
