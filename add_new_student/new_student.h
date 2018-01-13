#ifndef NEW_STUDENT_H
#define NEW_STUDENT_H

#include <QDialog>

namespace Ui {
class New_student;
}

class New_student : public QDialog
{
    Q_OBJECT

public:
    explicit New_student(QWidget *parent = 0);
    ~New_student();
    void showDemo();
    int exec(void);

private slots:
    void on_pushButton_clicked();
    //void on_pushButton_3]_clicked();
    void setPlaceholderText(const QString &);
    void on_pushButton_3_clicked();

private:
    Ui::New_student *ui;


};

#endif // NEW_STUDENT_H
