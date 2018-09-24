#include <iostream>

class ajedrez{
    protected:
        int a[8][8];      //Atributo de la clase, esta matriz es el tablero de 8 x 8
    public:
        int error;        //Si ocurrio un choque entre las reinas se le asigna 1 a esta variable
        ajedrez();
        void limpiar();   //Inicializa el tablero, para usarlo nuevamente
        void dibujar();   //Muestra el tablero
        void insertar(int posx, int posy);//Metodo que coloca una reina en el tablero si es posible hacerlo
        //void generar(int, int);
};



