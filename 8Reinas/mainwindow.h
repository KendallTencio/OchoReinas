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

   void on_pushButton_3_clicked();

   void on_pushButton_4_clicked();

   void on_pushButton_6_clicked();

   void on_pushButton_5_clicked();

private:
    int x=-20;
    int y=60;
    Ui::MainWindow *ui;
    bool m_flag = false;
    void mover(int,int);
};



#endif // MAINWINDOW_H
