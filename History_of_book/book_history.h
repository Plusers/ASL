#ifndef BOOK_HISTORY_H
#define BOOK_HISTORY_H

#include <QDialog>

namespace Ui {
class Book_history;
}

class Book_history : public QDialog
{
    Q_OBJECT

public:
    explicit Book_history(QWidget *parent = 0);
    ~Book_history();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Book_history *ui;
};

#endif // BOOK_HISTORY_H
