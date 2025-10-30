#pragma once
#include <string>
class Playlist {
    private:
    int id;
    std::string nombre;
    int idUsuario;
    int cantidadCanciones;
    bool estado;
    public:
    Playlist();

    //getters
    int getID();
    std::string getNombre();
    int getIDUsuario();
    int getCantidadCanciones();
    bool getEstado();

    // setters
    void setID(int _id);
    void setNombre(std::string _nombre);
    void setIDUsuario(int _idUsuario);
    void setCantidadCanciones(int _cantidadCanciones);
    void setEstado(bool _estado);
};