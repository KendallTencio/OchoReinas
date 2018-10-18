#ifndef REINA_H
#define REINA_H


class Reina
{

public:
    Reina(int,int);
    void mover(int _puntoX,int _puntoY);
    int getPuntoX();
    int getPuntoY();

private:
    int puntoX;
    int puntoY;

};


#endif // REINA_H
