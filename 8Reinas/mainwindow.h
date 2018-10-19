#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "reina.h"
#include <QLabel>
#include "soluciones.h"
#include "8reinas.h"
#include "qmessagebox.h"
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

   void on_btnAnterior_clicked();

private:
    QList<Solucion> listablack;
    QList<QLabel *> listaGrafica;
    QList<Reina *> listaReinas;
    Ui::MainWindow *ui;
    bool m_flag = false;
    void mover(int posSolicion);
    void backTracking();
    int cont;


};



#endif // MAINWINDOW_H
