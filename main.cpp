#include "mainwindow.h"
#include <QApplication>
#include "camera.h"

#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Camera camera;
    camera.show();

    return app.exec();
};
