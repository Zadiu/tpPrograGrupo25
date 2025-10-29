#include <iostream>
#include "interprete.h"
using namespace std;

int Interprete::getIDInterprete(){return idInterprete;}
char* getNombre(){return }
int getSuscriptores();
bool getNotificaciones();
bool getEstado();

void Interprete::setNombre(const char* _nombre){strcpy(nombre, _nombre);}
void Interprete::setNacionalidad(const char* _nacionalidad){strcpy(nacionalidad, _nacionalidad);}
void Interprete::setSuscriptores(int _suscriptores){strcpy(suscriptores, _suscriptores);}
void Interprete::setEstado(bool _estado){estado=_estado;}
void Interprete::setNotificaciones(bool _notificaciones){notificaciones=_notificaciones;}

void cargarInterprete();
void mostrarInterprete();

