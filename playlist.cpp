#include "playlist.h"

Playlist::Playlist() {
    id = 0;
    idUsuario = 0;
    cantidadCanciones = 0;
    estado = false;
}

// getters 
int Playlist::getID() {return id;}
std::string Playlist::getNombre() {return nombre;}
int Playlist::getIDUsuario() {return idUsuario;}
int Playlist::getCantidadCanciones() {return cantidadCanciones;}
bool Playlist::getEstado() {return estado;}

// setters
void Playlist::setID(int _id){id = _id;}
void Playlist::setNombre(std::string _nombre) {nombre = _nombre;}
void Playlist::setIDUsuario(int _idUsuario) {idUsuario = _idUsuario;}
void Playlist::setCantidadCanciones(int _cantidadCanciones) {cantidadCanciones = _cantidadCanciones;}
void Playlist::setEstado(bool _estado) {estado = _estado;}