#include "usuario.h"
#include <cstring>
#include <iostream>

//constructor por defecto
Usuario::Usuario(){
    id=0;
    strcpy(nombre, "");
    strcpy(apellido, "");
    strcpy(mail, "");
    strcpy(dni, "");
    strcpy(telefono, "");
    cantInterpretesSuscriptos=0;
    esAdmin=false;
    estado=true;

    for(int i=0;i<MAX_INTERPRETES;i++){
        interpretesSuscriptos[i]=0;
    }
}

//constructor para registros
Usuario::Usuario(int _id, const char* _nombre, const char* _apellido, const char* _dni, const char* _telefono, const char* _mail, bool esAdmin_){
    id=_id;
    strcpy(nombre, _nombre);
    strcpy(apellido, _apellido);
    strcpy(dni, _dni);
    strcpy(telefono, _telefono);
    strcpy(mail, _mail);
    estado=true;
    esAdmin=esAdmin_;
    cantInterpretesSuscriptos=0;

    for(int i=0;i<MAX_INTERPRETES;i++){
        interpretesSuscriptos[i]=0;
    }
}

int Usuario::getID(){return id;}
char* Usuario::getNombre(){return nombre;}
char* Usuario::getApellido(){return apellido;}
char* Usuario::getDNI(){return dni;}
char* Usuario::getMail(){return mail;}
char* Usuario::getTelefono(){return telefono;}
bool Usuario::getEsAdmin(){return esAdmin;}
const int* Usuario::getInterpretesSuscriptos() const{return interpretesSuscriptos;}
int Usuario::getCantInterpretesSuscriptos() const {return cantInterpretesSuscriptos;}
bool Usuario::getEstado(){return estado;}

void Usuario::setNombre(const char* _nombre){strcpy(nombre, _nombre);}
void Usuario::setApellido(const char* _apellido){strcpy(apellido, _apellido);}
void Usuario::setMail(const char* _mail){strcpy(mail, _mail);}
void Usuario::setTelefono(const char* _telefono){strcpy(telefono, _telefono);}
void Usuario::setEstado(bool _estado){estado = _estado;}

//metodos a desarrollar
void agregarArtista(int _idInterprete);
void quitarArtista(int _idInterprete);
void estaSiguiendo(int _idInterprete);
