#ifndef LISTADETAREAS_H
#define LISTADETAREAS_H
#include "Tarea.h"


class ListaDeTareas {

private:
    Tarea _listatareas[10];
    int _cantidad;
    void ordenar();
public:
    ListaDeTareas();
    void CambiarEstado();
    void mostrar(bool deadline);
    void agregar(Tarea tarea);


};
#endif // LISTADETAREAS_H
