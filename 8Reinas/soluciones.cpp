#include "soluciones.h"

Solucion::Solucion()
{
}


void Solucion::setPuntos(int x,int y,int pos)
{
    puntos[pos][0]=x;
    puntos[pos][1]=y;
}

