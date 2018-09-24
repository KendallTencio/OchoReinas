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
   MainWindow(QWidget *parent = 0);
   ~MainWindow();

private slots:
   void on_pushButton_clicked();

   void on_pushButton_2_clicked();

   void paintEvent(QPaintEvent *event/*,int x, int y*/);

private:
    Ui::MainWindow *ui;
    bool m_flag = false;
};

#endif // MAINWINDOW_H
