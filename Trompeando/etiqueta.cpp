#include "etiqueta.h"
#include<iostream>

Etiqueta::Etiqueta()
{
    cantidad=0;
}

void Etiqueta::cargar(char cantidadetiqueta[],int cantidad){

 char aux[10];
 for(int i=0;i<cantidad;i++){
    std::cout<<"Ingrese la etiqueta "<<i+1<<": "<<std::endl;
    std::cin.getline(aux,10);
     std::cout<<"flag0.25"<<std::endl;
   this->setcadenaetiqueta(aux);
 }
std:: cout<<"flag0.5"<<std::endl;
}
void Etiqueta::mostrar(){
     std::cout<<"flag1.5"<<std::endl;
    for(int i=0;i<this->getcantidad();i++){
    std::cout<<"etiqueta "<<i+1<<": "<<this->getcadenaetiqueta()<<std::endl;
}
}
