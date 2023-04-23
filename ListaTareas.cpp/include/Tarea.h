#ifndef TAREA_H
#define TAREA_H
#include <string>
#include "Fecha.h"


using namespace std;
class Tarea {

private:

  int _ID;
  string _descripcion;
  string _dificultad;
  Fecha _fechalimite;
  int _estado;


public:
  Tarea();
  Tarea(int id, string descripcion, string dificultad, Fecha fechaLimite, int estado = 0);

  int getID();
  string getDescripcion();
  Fecha getFechaLimite();
  string getNivelDificultad();
  string getDescripcionEstado();
  int getEstado();

  void setEstado(int estado);



};


#endif // TAREA_H
