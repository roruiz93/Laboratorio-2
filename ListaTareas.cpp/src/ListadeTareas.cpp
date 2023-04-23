#include <iostream>
#include "ListadeTareas.h"
#include "../FuncionesG.h"



ListaDeTareas::ListaDeTareas(){
      _cantidad=0;
      }

void ListaDeTareas::agregar(Tarea tarea){
      if(_cantidad<10){
        _listatareas[_cantidad]=tarea;
        _cantidad++;
      }
    }
void ListaDeTareas::mostrar(bool deadline){
     ordenar();
     Fecha Finicial(01,04,2023);
    for(int i=0;i<_cantidad;i++){
      cout<<_listatareas[i].getID()<<"\t";
      cout<<_listatareas[i].getDescripcion()<<"\t";
      cout<<_listatareas[i].getFechaLimite().toString()<<"\t";
      cout<<_listatareas[i].getNivelDificultad()<<"\t";
      cout<<_listatareas[i].getDescripcionEstado()<<"\t";
      if (deadline){cout<<diferenciaDias(Finicial,_listatareas[i].getFechaLimite());
      }
      cout<<endl<<"============================================================================"<<endl;
      }
    }
void ListaDeTareas::ordenar(){
  Tarea aux;
  int menor=0;

  for(int i=0;i<_cantidad-1;i++){
    menor=i;

    for(int j=i+1;j<_cantidad;j++){
      if(_listatareas[j].getFechaLimite().toString("YYYY/MM/DD")<_listatareas[menor].getFechaLimite().toString("YYYY/MM/DD")){
        menor=j;
      }
    }
  if(menor != i){
      aux=_listatareas[i];
      _listatareas[i]=_listatareas[menor];
      _listatareas[menor]=aux;
      }
  }
}

void ListaDeTareas::CambiarEstado(){

  int idfalso;
  string respuesta;
  cout<<"Ingrese Id para ver tarea:";
  cin >>idfalso;

  for(int i=0;i<10;i++){
      if(idfalso ==_listatareas[i].getID()){
              cout<<_listatareas[i].getDescripcion();
              cout<<"\t"<<"Estado: ";
              cout<<_listatareas[i].getDescripcionEstado();
              cout<<endl<<endl;

         if(_listatareas[i].getEstado() == 0){
              cout<<"Desea cambiar el estado: S (si) - N (no) ";
              cin >> respuesta;
              if(respuesta=="S"){
              _listatareas[i].setEstado(1);}

         }else{cout<< "La tarea del Id ya se encuentra realizada";
              cout<<endl<<endl;
              }
            cout<<_listatareas[i].getEstado();
            cout<<_listatareas[i].getDescripcionEstado();


      }
    }
  cout<<endl;
  }
