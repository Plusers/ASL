#ifndef DEJURNIY_H
#define DEJURNIY_H

#include <QDialog>

namespace Ui {
class Dejurniy;
}

class Dejurniy : public QDialog
{
    Q_OBJECT

public:
    explicit Dejurniy(QWidget *parent = 0);
    ~Dejurniy();
int exec(void);
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dejurniy *ui;
};

#endif // DEJURNIY_H
