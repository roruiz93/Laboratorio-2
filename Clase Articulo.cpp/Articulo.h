#pragma once

class Articulo{

  private:

  char _codigo[5];
  char _descripcion[20];
  float _precio;
  int _stock;
  bool _estado;


  public:

  Articulo();
  Articulo(char *descripcion);
  void cargar();
  void mostrar();

  void setCodigo(const char *cod);
  void setDescripcion(const char *desc);
  void setPrecio(float precio);
  void setStock(int stock);
  void setEstado(bool estado);

  const char* getDescripcion();
  const char* getCodigo();
  float getPrecio();
  int getStock();
  bool getEstado();

};
