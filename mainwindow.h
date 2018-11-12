#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
  //  void menubutton();


    void on_menubutton_clicked();

    void on_exit_button_clicked();

    void on_tableView_activated(const QModelIndex &index);

private: // functions
    void showDemo();
    //void loadImage(FileDownloader*);
    void showQrEncode();
private: // members
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
