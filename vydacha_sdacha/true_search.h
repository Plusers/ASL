#ifndef TRUE_SEARCH_H
#define TRUE_SEARCH_H

#include <QDialog>

namespace Ui {
class True_Search;
}

class True_Search : public QDialog
{
    Q_OBJECT

public:
    explicit True_Search(QWidget *parent = 0);
    ~True_Search();

private:
    Ui::True_Search *ui;
};

#endif // TRUE_SEARCH_H
