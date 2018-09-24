//------------------------------------------------------------------------------------
#include <iostream>
#include <conio.h>
#include "8reinas.h"
using namespace std;
 

/*
Código extraído y modificado de: http://mygnet.net/codigos/cplusplus/juegos/8_reinas_en_un_tablero_de_ajedrez.2638
Creado por: Fabian Fari?as
*/

ajedrez::ajedrez(){  //Constructor de la clase
    error=0;             //Inicializo en 0 esta variable porq no debe iniciar con error
    for(int i=0;i<8;i++) //Inicializamos toda la matriz en 0
        for(int j=0;j<8;j++)
            a[i][j]=0;
}

void ajedrez::limpiar(){ //Metodo que inicializala matriz con 0
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        a[i][j]=0;
}
//------------------------------------------------------

void ajedrez::dibujar(){ //Metodo que dibuja el tablero
    for(int i=0;i<8;i++)
    {
    cout<<endl;
        for(int j=0;j<8;j++)
            cout<<a[i][j]<<"  ";
    }
}
//-----------------------------------------------------

void ajedrez::insertar(int posx, int posy){
    int x, y,i;     //Variables temporales para filas y columnas
    //Se comprueba que ni en las diagonales, ni en filas y columnas exista
    //una reina, si lo hay se asigna 1 a la bandera error
    for(i=0;i<8;i++)
        if(a[posx][i] == 1)error=1;
 
   
    for(i=0;i<8;i++){
        if(a[i][posy]== 1)error=1;
    }
    x=posx;
    y=posy;
	while(x!= 0 && y!=0){
        x--;
        y--;
	}
    for(i=0;i<8;i++){
        if((x+i)<8 &(y+i)<8)
            if(a[x+i][y+i]==1 )error=1;
    }
    x=posx;
    y=posy;
	while(x!=0 ){
        x--;
        y++;
	}
    for(i=0;i<8;i++){
        if((x+i<8 )&&((y-i>=0) && (y-i<8))){
            if(a[x+i][y-i]==1)error=1;
        }
 
    }
    a[posx][posy]=1;
}
//-------------------------------------------------
 
