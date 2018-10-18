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
    listaReinas.append(reina1);


}

void MainWindow::mover(){
    for(int i =0 ; i<listaReinas.size();i++){
        QPropertyAnimation *animation = new QPropertyAnimation(this->listaGrafica.at(1), "geometry");
        animation->setDuration(1000);
        animation->setStartValue(QRect(listaReinas.at(i)->getPuntoX(), 0, 100,listaReinas.at(i)->getPuntoY()));
        listaReinas.at(i)->mover(8,8);
        animation->setEndValue(QRect(listaReinas.at(i)->getPuntoX(), 0, 100, listaReinas.at(i)->getPuntoY()));
        animation->start();
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSiguiente_clicked()
{
    this->mover();
}
void MainWindow::backTracking(){
    m_flag = false;
    update();
   // QPaintEvent *evento();
    int soluciones=0;
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
                                        {
                                           listaBack.append(obj);
                                        }
        }}}}}}}}//Se cierran los 8 ciclos for


}
