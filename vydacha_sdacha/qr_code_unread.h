#ifndef QR_CODE_UNREAD_H
#define QR_CODE_UNREAD_H

#include <QDialog>

namespace Ui {
class QR_code_unread;
}

class QR_code_unread : public QDialog
{
    Q_OBJECT

public:
    explicit QR_code_unread(QWidget *parent = 0);
    ~QR_code_unread();
  int exec(void);
private slots:
    void on_pushButton_clicked();

private:
    Ui::QR_code_unread *ui;
};

#endif // QR_CODE_UNREAD_H
