#include "playlist.h"
#include <iostream>
#include <string>
using namespace std;

// getters

int Playlist::getID() {return id;}
string Playlist::getNombre() {return nombre;}
int Playlist::getIDUsuario() {return idUsuario;}
int Playlist::getCantidadCanciones() {return cantidadCanciones;}
bool Playlist::getEstado() {return estado;}

// setters

void Playlist::setNombre(std::string _nombre) {nombre = _nombre;}
void Playlist::setIDUsuario(int _idUsuario) {idUsuario = _idUsuario;}
void Playlist::setCantidadCanciones(int _cantidadCanciones) {cantidadCanciones = _cantidadCanciones;}
void Playlist::setEstado(bool _estado) {estado = _estado;}

// metodos
/*
void Playlist::cargar() {
    cout << "=== Nueva Playlist ===" << endl;
    cout << ""
}
*/