#ifndef GIVE_BOOK_H
#define GIVE_BOOK_H

#include <QMainWindow>

namespace Ui {
class give_book;
}

class give_book : public QMainWindow
{
    Q_OBJECT

public:
    explicit give_book(QWidget *parent = 0);
    ~give_book();

private:
    Ui::give_book *ui;
};

#endif // GIVE_BOOK_H
