#include "add_book/add_book_start.h"
#include "ui_add_book_start.h"
#include "add_book/add_book_end.h"
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
    auto added = new Add_book_end(this);
    added->exec();
    auto books = new StorageModel("./new_book.csv");
    books->setObjectName("new_book");
    books->setTitle("new_added_books");
    QStringList headers = { "Name", "Count"};
    books->setHeaderData(headers);
//    books->setFileName("./new_book.csv");

    // добавляем одну строку в конец
    books->insertRow(books->rowCount());
    // произвольное количество в конец
    //add_book->insertRows(priceModel->rowCount(), 3);
    // теперь заполняем данные. Строки, естественно, нумеруются с нуля
    books->setData(books->rowCount() - 1, 0, ui->lineEdit->text());
    books->setData(books->rowCount() - 1, 1,ui->lineEdit_2->text());
    //priceModel->setData(0, 2, "25");
    //priceModel->setData(1, 0, "Мясо");
    //priceModel->setData(1, 1, "3 (кг)");
    //priceModel->setData(1, 2, "50");
    // Также можно обращаться к столбцу не по номеру, а по названию
    //priceModel->setData(2, "Name", "Молоко");
    //priceModel->setData(2, "Price", "17 руб");
    //priceModel->setData(2, "Count", "4 (л)");
    // важные мелочи: в модели хранятся строки, так что следить за тем, чтобы
    // число было числом нужно самому, не нужно в setData пихать неправильные
    // индексы - ничего хорошего не будет =) То есть сперва добавили строку,
    // потом заполнили.

    // можно удалять строки
    //priceModel->removeRow(3);

    // можно получать данные по индексу.
    // тут нельзя использовать auto потому что data возвращает QVariant,
    // а не QString. Это я к тому, что auto может повлечь за собой ошибки =(
    //QString message = priceModel->data(2, 0);
    //message.append(" стоит ");
    // а также по имени столбца
    //message.append(priceModel->data(2, "Price"));
    //QMessageBox::information(this, "Demo message", message);

    // а потом сохранить на диск
    // посмотрите, что там появилось в файле productModel.csv
    // он находится в папке build, на одном уровне с папкой ASL
    books->saveToDisk();

    // главная фича это то, что эту модель можно вывести в стандартной вьюхе
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

    // вообще, во вьюхе можно редактировать модель руками, но я рекомендую
    // сейчас использовать это только для оперативного просмотра модели
    // то есть вы можете создать чистую QTableView, привязать к модели,
    // дёрнуть show() и смотреть, как ваша модель меняется при ваших программных
    // действиях. Это удобно.
    dialog.exec();

    accept();
}
