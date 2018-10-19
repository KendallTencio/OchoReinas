#ifndef SOLUCION_H
#define SOLUCION_H


class Solucion
{
private:


public:
    Solucion();

    void setPuntos(int x,int y,int pos);
    int puntos[8][2]={{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};
};

#endif // SOLUCION_H
