
#include "mainwindow.h"
#include <QApplication>
#include  "reina.h"
#include <iostream>
//Código extraído y modificado de: http://mygnet.net/codigos/cplusplus/juegos/8_reinas_en_un_tablero_de_ajedrez.2638

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}


