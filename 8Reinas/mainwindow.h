#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "reina.h"
#include <QLabel>
#include "8reinas.h"
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

   void on_btnSiguiente_clicked();

private:
    QList<QLabel *> listaGrafica;
    QList<Reina *> listaReinas;
    QList<ajedrez*> listaBack;
    Ui::MainWindow *ui;
    bool m_flag = false;
    void mover();
    void backTracking();

};



#endif // MAINWINDOW_H
