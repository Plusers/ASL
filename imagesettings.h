#ifndef IMAGESETTINGS_H
#define IMAGESETTINGS_H

#include <QWidget>

namespace Ui {
class Imagesettings;
}

class Imagesettings : public QWidget
{
    Q_OBJECT

public:
    explicit Imagesettings(QWidget *parent = 0);
    ~Imagesettings();

private:
    Ui::Imagesettings *ui;
};

#endif // IMAGESETTINGS_H
