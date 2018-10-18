#include "reina.h"



Reina::Reina(int _x,int _y)
{

    this->puntoX=_x;
    this->puntoY=_y;
}


void Reina::mover(int _puntoX,int _puntoY)
{
    this->puntoX = 63+63*_puntoX;
    this->puntoY = 119+119*_puntoY;

}

int Reina::getPuntoX()
{
    return this->puntoX;
}
int Reina::getPuntoY()
{
    return this->puntoY;
}
