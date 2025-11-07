#include "usuario.h"
#include <iostream>

int Usuario::getID(){return id;}
char* Usuario::getNombre(){return nombre;}
char* Usuario::getApellido(){return apellido;}
char* Usuario::getDNI(){return dni;}
char* Usuario::getMail(){return mail;}
char* Usuario::getTelefono(){return telefono;}
bool Usuario::getSuscriptor(){return suscriptor;}
bool Usuario::getEstado(){return estado;}

void Usuario::setNombre(const char* _nombre){strcpy(nombre, _nombre);}
void Usuario::setApellido(const char* _apellido){strcpy(apellido, _apellido);}
void Usuario::setMail(const char* _mail){strcpy(mail, _mail);}
void Usuario::setTelefono(const char* _telefono){strcpy(telefono, _telefono);}
void Usuario::setEstado(bool _estado){estado = _estado;}
void Usuario::setSuscriptor(bool _suscriptor){suscriptor = _suscriptor;}
