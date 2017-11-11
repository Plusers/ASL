#ifndef USLOVIE_H
#define USLOVIE_H

#include <QDialog>

namespace Ui {
class Uslovie;
}

class Uslovie : public QDialog
{
    Q_OBJECT

public:
    explicit Uslovie(QWidget *parent = 0);
    ~Uslovie();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Uslovie *ui;
};

#endif // USLOVIE_H
