#include "add_new_student/new_student.h"
#include "ui_new_student.h"
#include "models/storagemodel.h"

#include <QDialog>
#include <QDialogButtonBox>
#include <QTableView>
#include <QMessageBox>

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
   auto add_student = new StorageModel();
   add_student->setObjectName("students");
   add_student->setTitle("Список учеников");
   QStringList headers = { "form", "date of birth ", "month of birth","number"};
   add_student->setHeaderData(headers);
   add_student->setFileName("./new_student.csv");
   add_student->insertRow(add_student->rowCount());
   add_student->setData(0, 0, ui->form->text());
   add_student->setData(0,1,ui->dateofbirth->text());
   add_student->setData(0,2,ui->monthofbirth->text());
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
    students1->setModel(add_student);

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
    add_student->saveToDisk();
    QString message = add_student->data(0,0);
    message.append(" form ");
    // а также по имени столбца
    message.append(add_student->data(0,1));
    message.append("day of birth");
    message.append(add_student->data(0,2));
    message.append("month oh birth");
    QMessageBox::information(this, "Demo message", message);

     accept();
 }
