#ifndef ACTION_WITH_QR_CODE_H
#define ACTION_WITH_QR_CODE_H

#include <QDialog>

namespace Ui {
class Action_with_QR_code;
}

class Action_with_QR_code : public QDialog
{
    Q_OBJECT

public:
    explicit Action_with_QR_code(QWidget *parent = 0);
    ~Action_with_QR_code();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Action_with_QR_code *ui;
};

#endif // ACTION_WITH_QR_CODE_H
