#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vydacha_sdacha/dejurniy.h"
#include "add_book/add_book_start.h"
#include "list_of_students_book/info_from_id.h"
#include "add_new_student/new_student.h"
#include "History_of_book/book_history.h"
#include "vydacha_sdacha/qr_code_unread.h"

#include "models/storagemodel.h"

#include <QDialog>
#include <QDialogButtonBox>
#include <QTableView>
#include <QMessageBox>

//#include <qrwidget.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    showDemo();
//    showQrEncode();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    auto dej = new Dejurniy(this);
    dej->exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    auto dej1 = new Dejurniy(this);
    dej1->exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    auto add = new Add_book_start(this);
    add->exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    auto inf = new Info_from_ID(this);
    inf->exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    auto stud = new New_student(this);
    stud->exec();

}

void MainWindow::on_pushButton_6_clicked()
{
    auto hb = new Book_history(this);
    hb->exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    auto qr = new QR_code_unread(this);
    qr->exec();
}

void MainWindow::on_pushButton_8_clicked()
{
     close();
}

void MainWindow::showDemo() {
    // Demo on storage model
    // сперва создаём модель и заполняем метаданные
    auto priceModel = new StorageModel();
    priceModel->setObjectName("poductModel");
    priceModel->setTitle("Модель списка товаров");
    QStringList headers = { "Name", "Count", "Price"};
    priceModel->setHeaderData(headers);
    priceModel->setFileName("./productModel.csv");

    // добавляем одну строку в конец
    priceModel->insertRow(priceModel->rowCount());
    // произвольное количество в конец
    priceModel->insertRows(priceModel->rowCount(), 3);
    // теперь заполняем данные. Строки, естественно, нумеруются с нуля
    priceModel->setData(0, 0, "Хлеб");
    priceModel->setData(0, 1, "12");
    priceModel->setData(0, 2, "25");
    priceModel->setData(1, 0, "Мясо");
    priceModel->setData(1, 1, "3 (кг)");
    priceModel->setData(1, 2, "50");
    // Также можно обращаться к столбцу не по номеру, а по названию
    priceModel->setData(2, "Name", "Молоко");
    priceModel->setData(2, "Price", "17 руб");
    priceModel->setData(2, "Count", "4 (л)");
    // важные мелочи: в модели хранятся строки, так что следить за тем, чтобы
    // число было числом нужно самому, не нужно в setData пихать неправильные
    // индексы - ничего хорошего не будет =) То есть сперва добавили строку,
    // потом заполнили.

    // можно удалять строки
    priceModel->removeRow(3);

    // можно получать данные по индексу.
    // тут нельзя использовать auto потому что data возвращает QVariant,
    // а не QString. Это я к тому, что auto может повлечь за собой ошибки =(
    QString message = priceModel->data(2, 0);
    message.append(" стоит ");
    // а также по имени столбца
    message.append(priceModel->data(2, "Price"));
    QMessageBox::information(this, "Demo message", message);

    // а потом сохранить на диск
    // посмотрите, что там появилось в файле productModel.csv
    // он находится в папке build, на одном уровне с папкой ASL
    priceModel->saveToDisk();

    // главная фича это то, что эту модель можно вывести в стандартной вьюхе
    QDialog dialog(this);
    dialog.setObjectName("StorageDemoDialog");
    dialog.setWindowTitle(tr("DemoDialog"));
    dialog.setSizeGripEnabled(true);

    auto priceView = new QTableView(&dialog);
    priceView->setModel(priceModel);

    auto buttons = new QDialogButtonBox(QDialogButtonBox::Ok, &dialog);
    connect(buttons, &QDialogButtonBox::accepted, &dialog, &QDialog::accept);
    connect(buttons, &QDialogButtonBox::rejected, &dialog, &QDialog::reject);

    auto layout = new QVBoxLayout(&dialog);
    layout->addWidget(priceView);
    layout->addWidget(buttons);
    dialog.setLayout(layout);
    dialog.resize(400, 200);

    // вообще, во вьюхе можно редактировать модель руками, но я рекомендую
    // сейчас использовать это только для оперативного просмотра модели
    // то есть вы можете создать чистую QTableView, привязать к модели,
    // дёрнуть show() и смотреть, как ваша модель меняется при ваших программных
    // действиях. Это удобно.
    dialog.exec();
}

//void MainWindow::showQrEncode() {
//    QDialog dial(this);
//    auto qrwid = new QRWidget(&dial);
//    dial.exec();
//}
