#ifndef ADD_BOOK_START_H
#define ADD_BOOK_START_H

#include <QDialog>

namespace Ui {
class Add_book_start;
}

class Add_book_start : public QDialog
{
    Q_OBJECT

public:
    explicit Add_book_start(QWidget *parent = 0);
    ~Add_book_start();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Add_book_start *ui;
};

#endif // ADD_BOOK_START_H
