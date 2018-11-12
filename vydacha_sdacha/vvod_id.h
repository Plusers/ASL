#ifndef VVOD_ID_H
#define VVOD_ID_H

#include <QDialog>

namespace Ui {
class Vvod_ID;
}

class Vvod_ID : public QDialog
{
    Q_OBJECT

public:
    explicit Vvod_ID(QWidget *parent = 0);
    ~Vvod_ID();
    int exec(void);
private slots:

    void on_search_button_clicked();

private:
    Ui::Vvod_ID *ui;
};

#endif // VVOD_ID_H
