#pragma once
#include <string>
#include "cancion.h"
#include <vector>

class Playlist {
   private:
   int id;
   std::string nombre;
   int idUsuario;
   int cantidadCanciones;
   bool estado;
   std::vector<Cancion> canciones;

   public:
   // getters
   int getID();
   std::string getNombre();
   int getIDUsuario();
   bool getEstado();
   int getCantidadCanciones();

   // setters
   void setID(int _id);
   void setNombre(std::string _nombre);
   void setIDUsuario(int _idUsuario);
   void setEstado(bool _estado);
   void setCantidadCanciones(int _cantidadCanciones);
   // void cargar();
   // void mostrar();

   // bool escribirDisco();
   // bool leerDisco();
};