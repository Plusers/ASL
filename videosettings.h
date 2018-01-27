#ifndef VIDEOSETTINGS_H
#define VIDEOSETTINGS_H

#include <QWidget>

namespace Ui {
class videosettings;
}

class videosettings : public QWidget
{
    Q_OBJECT

public:
    explicit videosettings(QWidget *parent = 0);
    ~videosettings();

private:
    Ui::videosettings *ui;
};

#endif // VIDEOSETTINGS_H
