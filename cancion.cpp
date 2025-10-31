#include <iostream>
#include <cstring>
#include "cancion.h"
using namespace std;

int Cancion::getIDCancion(){return idCancion;}

char* Cancion::getTitulo(){return titulo;}
int Cancion::getIDInterprete(){return IDInterprete;}
int Cancion::getGenero(){return genero;}
int Cancion::getReproducciones(){return reproducciones;}
int Cancion::getLikes(){return likes;}
bool Cancion::getEstado() {return estado;}

void Cancion::setTitulo(const char* _titulo){strcpy(titulo, _titulo);}
void Cancion::setIDInterprete(int _IDInterprete){IDInterprete=_IDInterprete;}
void Cancion::setGenero(int _genero){genero=_genero;}
void Cancion::setEstado(int _estado){estado=_estado;}

void cargarCancion();
void mostrarCancion();
