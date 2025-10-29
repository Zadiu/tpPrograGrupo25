#include <iostream>
#include "cancion.h"
using namespace std;

int Cancion::getIDCancion(){return idCancion;}

char* const Cancion::getTitulo(){return titulo;}
int Cancion::getIDInterprete(){return IDInterprete;}
int Cancion::getGenero(){return genero;}
int Cancion::getReproducciones(){return reproducciones;}
int Cancion::getLikes(){return likes;}
bool Cancion::getEstado() {return estado;}

void setTitulo(const char* _titulo);
void setIDArtista(int _IDInterprete);
void setGenero(int _genero);
void setEstado(int _estado);

void cargarCancion();
void mostrarCancion();

