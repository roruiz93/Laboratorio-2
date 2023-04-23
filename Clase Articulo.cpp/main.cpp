#pragma once
#include <iostream>
#include "Articulo.h"
#include "funciones.h"

using namespace std;

int main()
{
    /*Articulo A1;
    A1.cargar();
    A1.mostrar();*/

    Articulo VecA1[3];

    ///PTO A - HACER UN VECTOR DE ARTICULOS:
    for(int i=0;i<3;i++){
    VecA1[i].cargar();
    cout<<"====================="<<endl;
    }
    ///PTO B - MOSTRAR LOS ARTICULOS:
    for(int i=0;i<3;i++){
    VecA1[i].mostrar();
    cout<<"====================="<<endl;
    }

    ///PTO C - VER QUE ARTICULOS TIENE MAYOR PRECIO Y MOSTRARLOS
    compararPrecio(VecA1,3);

    return 0;
}
