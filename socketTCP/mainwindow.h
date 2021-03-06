#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>

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
    void on_pushButton_exit_clicked();

    void on_pushButton_connect_to_telnet_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket tcpSocket;
    QTcpServer server;

};

#endif // MAINWINDOW_H
