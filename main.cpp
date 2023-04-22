#include <iostream>
#include "ListadeTareas.h"
#include "FuncionesG.h"

using namespace std;

int main()
{
    int opcion;
    ListaDeTareas PIPI;

    do{
      cout << "1-CARGAR TAREA" <<endl;
      cout << "2-VER LISTA DE TAREAS ORDENADA" <<endl;
      cout << "3-VER Y MODIFICAR ESTADO TAREA" <<endl;
      cout << "4-VER VENCIMIENTO DE FECHAS"<<endl;
      cout << "0-SALIR" <<endl;
      cout << "Ingrese una Opcion: ";
      cin  >> opcion;
      switch(opcion){
          case 1:
            cout<<"Cargar Tarea"<<endl;
            PIPI.agregar(cargarTarea());
            break;
          case 2:
            PIPI.mostrar();
            break;
          case 3:
            PIPI.CambiarEstado();
            break;
          case 4:
            break;

          case 99:
            PIPI=listaprearmada();
      }
      system("pause");
      system ("cls");

    }while(opcion!=0);

    return 0;
}
