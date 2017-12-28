#include "add_new_student/new_student.h"
#include "ui_new_student.h"
#include "models/storagemodel.h"

#include <QDialog>
#include <QDialogButtonBox>
#include <QTableView>
#include <QMessageBox>
#include<QString>>
#include<QStringList>
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
//void New_student::on_pushButton_clicked()
//{
    //accept();
//}
void New_student::on_pushButton_clicked(){
   auto student = new StorageModel();
   student->setObjectName("students");
   student->setTitle("Список учеников");
   QStringList headers = { "first name", "second name ", "form","NUMBER"};
   student->setHeaderData(headers);
   student->setFileName("./new_student.csv");
   student->insertRow(student->rowCount());
   student->insertRow(student->rowCount());

   int i=0;
   if(student->data(0,"NUMBER")==" "){
       student->setData(0, 0, ui->form->text());
       student->setData(0, 1,ui->dateofbirth->text());
       student->setData(0 ,2,ui->monthofbirth->text());
       student->setData(0,3,QString::number(i++));
       student->saveToDisk();
   }
   else
   {
   QString abcd;
   abcd=student->data(i,"NUMBER");
   abcd.toInt();
   //int y = abcd;
   while (i!= abcd){
       ++i;

   }
   student->setData(i, 0, ui->form->text());
   student->setData(i, 1,ui->dateofbirth->text());
   student->setData(i ,2,ui->monthofbirth->text());
   student->setData(i,3,QString::number(i++));
   student->saveToDisk();
       //student->setData(i,0,ui->form->text());

};


   //QString::number (student->rowCount());
   i++;


   QMessageBox msgBox;
   // QString message = add_student->data(0, 0);
    //message.append(" -класс ");
     //QString message = add_student->data(0, 1);
     //message.append("-день рождения");
    // QString message = add_student->data(0, 2);
             //message.append("-месяц рожденья");
    QDialog dialog(this);
    dialog.setObjectName("StorageDemoDialog");
    dialog.setWindowTitle(tr("DemoDialog"));
    dialog.setSizeGripEnabled(true);
    auto students1 = new QTableView(&dialog);
    students1->setModel(student);

    auto buttons = new QDialogButtonBox(QDialogButtonBox::Ok, &dialog);
    connect(buttons, &QDialogButtonBox::accepted, &dialog, &QDialog::accept);
    connect(buttons, &QDialogButtonBox::rejected, &dialog, &QDialog::reject);

    //auto students1 = new QTableView(&dialog);
//    priceView->setModel(priceModel.get());
    //students1->setModel(students);

    auto layout = new QVBoxLayout(&dialog);
    layout->addWidget(students1);
    layout->addWidget(buttons);
    dialog.setLayout(layout);
    dialog.resize(400, 200);

//    dialog.exec();
     //add_student->setData(0, 0, "Хлеб");
//QMessageBox msgBox;
    //ui->lineEdit->text()
      //msgBox.setText(ui->form->text());
      //msgBox.exec();
    //student->saveToDisk();
    QString message = student->data(i,0);
    message.append(" name ");
    // а также по имени столбца
    message.append(student->data(i,1));
    message.append(" second name ");
    message.append(student->data(i,2));
    message.append(" form ");
    message.append(QString::number(++i));
    message.append(" ID ");
    QMessageBox::information(this, "Demo message", message);
   //ui->label_2->setText("your ID:"+student->data(student->rowCount()-1,0)+'.'+student->data(student->rowCount()-1,1)+'.'+student->data(student->rowCount()-1,2)+'.'+student->data(student->rowCount()-1,3));
   ui->label_2->setText( student->data (i,3));
     //accept();
 }

void New_student::on_pushButton_3_clicked(){
    accept();
}
