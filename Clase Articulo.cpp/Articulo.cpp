#include "Articulo.h"
#include <cstring>
#include <iostream>
using namespace std;


 Articulo::Articulo(){

   _precio=0;
   _stock=0;
   strcpy (_codigo,"0000");
   strcpy (_descripcion,"0000");
 }

 Articulo::Articulo(char *descripcion){
   strcpy (_descripcion,descripcion);
 }

 void Articulo::setPrecio(float precio){
      _precio=precio;
    }
 void Articulo::setDescripcion(const char *desc){
    strcpy (_descripcion,desc);
    }
 void Articulo::setCodigo(const char *cod){
   strcpy (_codigo,cod);
    }
 void Articulo::setStock(int stock){
    _stock=stock;
    }
 void Articulo::setEstado(bool estado){
    _estado=estado;
    }

  const char* Articulo::getDescripcion(){
    return _descripcion;}

  const char* Articulo::getCodigo(){
    return _codigo;}

  float Articulo::getPrecio(){
    return _precio;}

  int Articulo::getStock(){
    return _stock;}

  bool Articulo::getEstado(){
    return _estado;}



  void Articulo::cargar(){
    char codigo[5], descripcion[20];
    float precio;
    int stock;

    cout<<"Ingrese codigo de Articulo: ";
        cin >> codigo;
        setCodigo(codigo);
    cout<<"Ingrese descripcion de Articulo: ";
        cin >> descripcion;
        setDescripcion(descripcion);
    cout<<"Ingrese precio de Articulo: ";
        cin >> precio;
        setPrecio(precio);
    cout<<"Ingrese stock de Articulo: ";
        cin >> stock;
        setStock(stock);
  }

  void Articulo::mostrar(){

    cout<<"CODIGO:      "<</*getCodigo()*/_codigo<<endl;
    cout<<"DESCRIPCION: "<</*getDescripcion()*/_descripcion<<endl;
    cout<<"PRECIO:$ "<</*getPrecio()*/_precio<<endl;
    cout<<"STOCK: # "<</*getStock()*/_stock<<endl;
    cout<<"ESTADO:  "<</*getEstado()*/_estado<<endl;

  }


