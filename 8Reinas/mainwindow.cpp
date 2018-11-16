#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>

using namespace std;

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    listaGrafica << ui->dama1;
    listaGrafica << ui->dama2;
    listaGrafica << ui->dama3;
    listaGrafica << ui->dama4;
    listaGrafica << ui->dama5;
    listaGrafica << ui->dama6;
    listaGrafica << ui->dama7;
    listaGrafica << ui->dama8;
    backTracking();
    Reina* reina1 = new Reina(120,70);
    Reina* reina2 = new Reina(180,70);
    Reina* reina3 = new Reina(240,70);
    Reina* reina4 = new Reina(300,70);
    Reina* reina5 = new Reina(360,70);
    Reina* reina6 = new Reina(420,70);
    Reina* reina7 = new Reina(480,70);
    Reina* reina8 = new Reina(540,70);
    listaReinas.append(reina1);
    listaReinas.append(reina2);
    listaReinas.append(reina3);
    listaReinas.append(reina4);
    listaReinas.append(reina5);
    listaReinas.append(reina6);
    listaReinas.append(reina7);
    listaReinas.append(reina8);
    cont=0;
    this->ui->btnAnterior->setEnabled(false);
}

void MainWindow::mover(int posSolucion)
{
    for(int i = 0; listaGrafica.size()>i;i++)
    {
        QPropertyAnimation *animation = new QPropertyAnimation(this->listaGrafica.at(i), "geometry");
        animation->setDuration(1000);
        animation->setStartValue(QRect(listaReinas.at(i)->getPuntoX(), 0, 100,listaReinas.at(i)->getPuntoY()));
        listaReinas.at(i)->mover(listablack.at(posSolucion).puntos[i][0],listablack.at(posSolucion).puntos[i][1]);
        animation->setEndValue(QRect(listaReinas.at(i)->getPuntoX(), 0, 100, listaReinas.at(i)->getPuntoY()));
        animation->start();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::backTracking(){
    ajedrez *obj = new ajedrez();
    for(int i1=0;i1<8;i1++){ //Estos 8 ciclos for me generaran las 92 posibles
        for(int i2=0;i2<8;i2++){ //combinaciones, se buscaran todas las posibles
            for(int i3=0;i3<8;i3++){ //coordenadas
                for(int i4=0;i4<8;i4++){
                    for(int i5=0;i5<8;i5++){
                        for(int i6=0;i6<8;i6++){
                            for(int i7=0;i7<8;i7++){
                                for(int i8=0;i8<8;i8++){

                                    obj->insertar(0,i1) ;      //Se pasan por parametros todas las combinaciones
                                    obj->insertar(1,i2) ;      //generadas por los ciclos for
                                    obj->insertar(2,i3) ;
                                    obj->insertar(3,i4) ;
                                    obj->insertar(4,i5) ;
                                    obj->insertar(5,i6) ;
                                    obj->insertar(6,i7) ;
                                    obj->insertar(7,i8) ;
                                    if(obj->error)
                                    {
                                        obj->limpiar();
                                        obj->error=0;
                                    }
                                    else
                                    {      Solucion solucion;
                                            solucion.setPuntos(0,i1,0);
                                            solucion.setPuntos(1,i2,1);
                                            solucion.setPuntos(2,i3,2);
                                            solucion.setPuntos(3,i4,3);
                                            solucion.setPuntos(4,i5,4);
                                            solucion.setPuntos(5,i6,5);                                         
                                            solucion.setPuntos(6,i7,6);
                                            solucion.setPuntos(7,i8,7);
                                         obj->limpiar();
                                       listablack.append(solucion);

                                    }
                                }}}}}}}}//Se cierran los 8 ciclos for


}

void MainWindow::on_btnSiguiente_clicked()
{
   this->ui->btnAnterior->setEnabled(true);
   this->mover(this->cont);
   cont++;
   this->ui->label->setText("Solucion: "+QString::number(cont));
   if(cont==92)
        ui->btnSiguiente->setEnabled(false);

}

void MainWindow::on_btnAnterior_clicked()
{
    this->ui->btnSiguiente->setEnabled(true);

    this->mover(this->cont);
    cont--;
    this->ui->label->setText("Solucion: "+QString::number(cont));
    if(cont==0)
        ui->btnAnterior->setEnabled(false);
}
