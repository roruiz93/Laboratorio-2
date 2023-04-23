#include "FuncionesG.h"
#include <ctime>
#include <string>
#include <iostream>
using namespace std;


Tarea cargarTarea(){
  int id;
  string descripcion;
  string dificultad;
  int dia,mes,anio;
  int estado;

  cout<<"Ingrese Id: #";
  cin >>id;

  cout<<"Ingrese Descripcion: ";
  cin.ignore();
  getline(cin, descripcion);

  cout<<"Ingrese Dificultad (Baja, Media, Alta): ";
  getline(cin, dificultad);

  cout<<"Ingrese dia Limite: ";
  cin >> dia;

  cout<<"Ingrese mes Limite: ";
  cin >> mes;

  cout<<"Ingrese Anio Limite: ";
  cin >> anio;

  cout<<"Ingrese Estado (1- Hecho , 0- Pendiente): ";
  cin >> estado;

  while(estado<0 || estado>1){
    cout<<"Esta mal, ingresa nuevamente respetando el parametro";
    cin >> estado;
  }

  return Tarea(id,descripcion, dificultad, Fecha (dia,mes,anio),estado);

}

  ListaDeTareas listaprearmada(){

  ListaDeTareas lista;

  lista.agregar(Tarea(01,"Crear Concepto del videojuego", "Media", Fecha(30,12,2023), 1));
  lista.agregar(Tarea(02,"Diseñar niveles", "Alta", Fecha(15,12,2023), 0));
  lista.agregar(Tarea(03,"Crear Sprites", "Media", Fecha(30,11,2023), 1));
  lista.agregar(Tarea(04,"Desarrollar la Mecanica del Juego", "Alta", Fecha(15,10,2023), 1));
  lista.agregar(Tarea(05,"Programar el juego", "Alta", Fecha(30,9,2023), 0));
  lista.agregar(Tarea(06,"Crear la musica y efecto de sonido", "Baja", Fecha(15,8,2023), 0));
  lista.agregar(Tarea(07,"Integrar musica y efecto de sonido", "Media", Fecha(30,07,2023), 1));
  lista.agregar(Tarea(8,"Realizar Prueba de rendimiento", "Media", Fecha(15,06,2023), 0));
  lista.agregar(Tarea(9,"Corregir errores", "Alta", Fecha(30,05,2023), 0));
  lista.agregar(Tarea(10,"Lanzar el juego", "baja", Fecha(15,04,2023), 1));

  return lista;
}
  int diferenciaDias(Fecha fechainicial, Fecha fechafinal){

    int contadorDias=0;
    bool primeraFechaMayor = fechainicial.toString("YYYY/MM/DD")>fechafinal.toString("YYYY/MM/DD");


      if(primeraFechaMayor){
        Fecha aux = fechainicial;
        fechainicial = fechafinal;
        fechafinal = aux;
      }

      while(fechainicial.toString()!= fechafinal.toString()){

        fechainicial.agregarDias(1);
        contadorDias++;

      }

      if(primeraFechaMayor){
        return contadorDias * -1;
      }

      return contadorDias;
  }




