#include "add_book/add_book_start.h"
#include "ui_add_book_start.h"

#include "models/storagemodel.h"

#include <QDialog>
#include <QDialogButtonBox>
#include <QTableView>
#include <QMessageBox>
Add_book_start::Add_book_start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_book_start)
{
    ui->setupUi(this);
}

Add_book_start::~Add_book_start()
{
    delete ui;
}

void Add_book_start::on_pushButton_clicked()
{
    //auto added = new Add_book_end(this);
    //added->exec();
    auto books = new StorageModel("./new_book.csv");
    books->setObjectName("new_book");
    books->setTitle("new_added_books");
    QStringList headers = { "Autor", "Name","Edition","Publication","year of edition","form","Count","ID"};
    books->setHeaderData(headers);
//    books->setFileName("./new_book.csv");


    books->insertRow(books->rowCount());


    auto row = books->rowCount()-1;
        books->setData(row, 0, ui->lineEdit->text());
        books->setData(row, 1, ui->lineEdit_2->text());
        books->setData(row, 2, ui->lineEdit_3->text());
        books->setData(row, 3, ui->lineEdit_4->text());
        books->setData(row, 4, ui->lineEdit_5->text());
        books->setData(row, 5, ui->lineEdit_7->text());
        books->setData(row, 6, ui->lineEdit_6->text());
        books->setData(row, 7, QString::number(books->rowCount()-1));
        books->saveToDisk();


    books->saveToDisk();


    QDialog dialog(this);
    dialog.setObjectName("StorageDemoDialog");
    dialog.setWindowTitle(tr("DemoDialog"));
    dialog.setSizeGripEnabled(true);

    auto priceView = new QTableView(&dialog);
    priceView->setModel(books);

    auto buttons = new QDialogButtonBox(QDialogButtonBox::Ok, &dialog);
    connect(buttons, &QDialogButtonBox::accepted, &dialog, &QDialog::accept);
    connect(buttons, &QDialogButtonBox::rejected, &dialog, &QDialog::reject);

    auto layout = new QVBoxLayout(&dialog);
    layout->addWidget(priceView);
    layout->addWidget(buttons);
    dialog.setLayout(layout);
    dialog.resize(400, 200);
//ui->label->setText("Книга успешно добавлена."+books->data(row,6));
    dialog.exec();

    //accept();
}
