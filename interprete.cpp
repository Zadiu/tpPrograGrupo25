#include <iostream>
#include "interprete.h"
using namespace std;

int Interprete::getIDInterprete(){return idInterprete;}
char* getNombre();
int getSuscriptores();
bool getNotificaciones();
bool getEstado();

void setNombre(const char* _nombre);
void setNacionalidad(const char* _nacionalidad);
void setSuscriptores(int _suscriptores);
void setEstado(bool _estado);
void setNotificaciones(bool _notificaciones);

void cargarInterprete();
void mostrarInterprete();
