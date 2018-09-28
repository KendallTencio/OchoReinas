#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qpainter.h"
#include "8reinas.h"
#include <QPropertyAnimation>

using namespace std;

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_pushButton_clicked()
{
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
                                            //obj->dibujar();   Aquí se realizaba un dibujo de la matriz en la consola
                                            soluciones++;
                                            cout<<"Solucion "<<soluciones<<endl;
                                            cout<<"Las coordenadas fueron: " <<endl;
                                            cout<<"1 - "<<i1+1<<endl;
                                            if (this->x<580)
                                                this->mover(30,0);
                                            cout<<"2 - "<<i2+1<<endl;
                                            cout<<"3 - "<<i3+1<<endl;
                                            cout<<"4 - "<<i4+1<<endl;
                                            cout<<"5 - "<<i5+1<<endl;
                                            cout<<"6 - "<<i6+1<<endl;
                                            cout<<"7 - "<<i7+1<<endl;
                                            cout<<"8 - "<<i8+1<<endl;
                                            obj->limpiar();
                                           //getch();
                                        }
        }}}}}}}}//Se cierran los 8 ciclos for
        delete obj;

        //  getch();
}

void MainWindow::on_pushButton_2_clicked()
{
    m_flag = true;
    update();
}

void MainWindow::paintEvent(QPaintEvent *event/*,int x, int y*/)
{
    int x = 10;
    int y = 10;
  //  if (this->y>60)
    //    this->mover(0,-10);
    QPainter painter(this);
    if(!m_flag) {
        painter.setPen( Qt::green );
        painter.setBrush( Qt::green );
        painter.drawRect(x, y, 50, 50);
    }
    else
    {
        painter.setPen( Qt::red );
        painter.setBrush( Qt::red );
        painter.drawRect(90, 10, 50, 50);
        painter.setPen( Qt::blue );
        painter.setBrush( Qt::blue );
        painter.drawRect(10, 10, 50, 50);
    }
}

void MainWindow::mover(int _x,int _y){
    QPropertyAnimation *animation = new QPropertyAnimation(ui->label, "geometry");
    animation->setDuration(100);
    animation->setStartValue(QRect(this->x, 0, 100, this->y));
    this->y +=_y;
    this->x +=_x;
    animation->setEndValue(QRect(x,0, 100, y));
    animation->start();
}

void MainWindow::on_pushButton_3_clicked()
{
    if (this->y>60)
        this->mover(0,-10);
}

void MainWindow::on_pushButton_4_clicked()
{
    if (this->x>-30)
    this->mover(-10,0);
}

void MainWindow::on_pushButton_6_clicked()
{
    if (this->y<630)
        this->mover(0,10);
}

void MainWindow::on_pushButton_5_clicked()
{
    if (this->x<580)
        this->mover(10,0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
