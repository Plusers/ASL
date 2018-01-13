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
    int exec(void);

private slots:

    void setPlaceholderText(const QString &);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_textEdited(const QString &);

    void on_Add_book_start_2_changed();

private:
    Ui::Add_book_start *ui;
};

#endif // ADD_BOOK_START_H
