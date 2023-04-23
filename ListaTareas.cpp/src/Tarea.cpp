#include <iostream>
#include "Tarea.h"
using namespace std;

Tarea::Tarea(){
  _ID=0;
  _descripcion="";
  _dificultad="";
  _fechalimite=Fecha();
  _estado=0;
}
Tarea::Tarea (int id, string descripcion, string dificultad, Fecha fechaLimite, int estado){
  _ID=id;
  _descripcion=descripcion;
  _dificultad=dificultad;
  _fechalimite=fechaLimite;
  _estado=estado;
}
  void Tarea::setEstado(int estado){
    _estado=estado;}

  int Tarea::getID(){
    return _ID;
    }

  string Tarea::getDescripcion(){
    return _descripcion;
    }

 Fecha Tarea::getFechaLimite(){
    return _fechalimite;
    }

 string Tarea::getNivelDificultad(){
    return _dificultad;
    }

 string Tarea::getDescripcionEstado(){
    if(_estado>0){
      return "Hecho";}
      else{return "Pendiente";}
    }
  int Tarea::getEstado(){
     return _estado;
    }


