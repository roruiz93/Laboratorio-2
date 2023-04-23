#include "funciones.h"
#include <cstring>
#include <iostream>

using namespace std;

void compararPrecio(Articulo *vec ,int cant){
 int precio;
 cout<<"Ingrese valor de Referencia a comparar: $";
 cin >>precio;
 cout<<"LOS ARTICULOS QUE SUPERAN EL PRECIO A COMPARAR SON: "<<endl;
 for(int i=0;i<cant;i++){
    if(vec[i].getPrecio()>precio){
      cout<<vec[i].getDescripcion()<<endl;
    }
 }
}




