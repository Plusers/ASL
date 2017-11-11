#ifndef ADD_BOOK_END_H
#define ADD_BOOK_END_H

#include <QDialog>

namespace Ui {
class Add_book_end;
}

class Add_book_end : public QDialog
{
    Q_OBJECT

public:
    explicit Add_book_end(QWidget *parent = 0);
    ~Add_book_end();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Add_book_end *ui;
};

#endif // ADD_BOOK_END_H
