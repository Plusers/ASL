#ifndef INFO_FROM_ID_H
#define INFO_FROM_ID_H

#include <QDialog>

namespace Ui {
class Info_from_ID;
}

class Info_from_ID : public QDialog
{
    Q_OBJECT

public:
    explicit Info_from_ID(QWidget *parent = 0);
    ~Info_from_ID();
     int exec(void);


private slots:
    void setPlaceholderText(const QString &);
    void on_pushButton_clicked();

private:
    Ui::Info_from_ID *ui;
};

#endif // INFO_FROM_ID_H
