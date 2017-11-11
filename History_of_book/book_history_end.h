#ifndef BOOK_HISTORY_END_H
#define BOOK_HISTORY_END_H

#include <QDialog>

namespace Ui {
class Book_history_end;
}

class Book_history_end : public QDialog
{
    Q_OBJECT

public:
    explicit Book_history_end(QWidget *parent = 0);
    ~Book_history_end();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Book_history_end *ui;
};

#endif // BOOK_HISTORY_END_H
