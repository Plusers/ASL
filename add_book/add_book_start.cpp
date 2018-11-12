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
};

int Add_book_start::exec(void){
    int r=0;
    //ui->label->setText("Problem");
    setPlaceholderText("123");
    r=QDialog::exec();

    return r;
}

//

void Add_book_start::on_pushButton_clicked()
{
    //auto added = new Add_book_end(this);
    //added->exec();
    auto books = new StorageModel("./new_book.csv");
    books->setObjectName("new_book");
    books->setTitle("new_added_books");
    QStringList headers = { "Autor", "Name","Edition","Publication","year of edition","form","Count","ID", "Вид"};
    books->setHeaderData(headers);
 //books->setFileName("./new_book.csv");


    //books->insertRow(books->rowCount());
    QString count_1;
    count_1=ui->count->text();
    //count_1.toInt();


   // ui->lineEdit->setPlaceholderText(QString("Автор"));
   // ui->lineEdit_2->setPlaceholderText(QString("Издатель"));
   // ui->lineEdit_3->setPlaceholderText(QString("Название/Предемет"));
   // ui->lineEdit_4->setPlaceholderText(QString("Издание"));
   // ui->lineEdit_5->setPlaceholderText(QString("Год издания"));
   // ui->lineEdit_6->setPlaceholderText(QString("Количество"));
   // ui->lineEdit_7->setPlaceholderText(QString("Класс"));
    auto row = books->rowCount()-1;
    //auto roww = books->rowCount()-1


     //books->setData(0,0,"");
        //int i=1;
        if (count_1.toInt() > 0){

            for(int i=0;i<count_1.toInt();i++){
                books->insertRow(books->rowCount() );
                books->setData(row+i, 0, ui->author->text());
                books->setData(row+i, 1, ui->name->text());
                books->setData(row+i, 2, ui->izdanie->text());
                books->setData(row+i, 3, ui->izdatel->text());
                books->setData(row+i, 4, ui->godizdania->text());
                books->setData(row+i, 5, ui->form->text());
                books->setData(row + i, 6, "1");
                books->setData(row + i , 7,QString::number(books->rowCount()));
                books->setData(row+i, 8, ui->quantity->text());

            };

        };

        books->saveToDisk();


   // books->saveToDisk();


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
    dialog.showFullScreen();
//ui->label->setText("Книга успешно добавлена."+books->data(row,6));
    dialog.exec();
//ui->label->setText("Артикул : "+QString::number(books->rowCount()));
    //accept();
}
void Add_book_start::setPlaceholderText(const QString&  ){
       ui->author->setPlaceholderText(QString("Автор (В.В.Виленкин)"));
       ui->izdatel->setPlaceholderText(QString("Издатель (Дрофа/Вентана-граф и т.д.)"));
       ui->name->setPlaceholderText(QString("Название/Предемет(Химия)"));
       ui->izdanie->setPlaceholderText(QString("Издание (2-е дополнительное)" ));
       ui->godizdania->setPlaceholderText(QString("Год издания (2017)"));
       ui->count->setPlaceholderText(QString("Количество"));
       ui->form->setPlaceholderText(QString("Класс (10)"));
       ui->quantity->setPlaceholderText(QString("(Учебник/Пособие))"));

}

void Add_book_start::on_pushButton_2_clicked()
{
    accept();
}

void Add_book_start::on_lineEdit_textEdited(const QString &)
{
    //ui->lineEdit->setPlaceholderText(QString("Автор"));
}

void Add_book_start::on_Add_book_start_2_changed()
{
    //ui->lineEdit->setPlaceholderText(QString("Автор"));
}
