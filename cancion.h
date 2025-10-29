#pragma once
using namespace std;

class Cancion{
private:
    int idCancion;
    char titulo[40];
    int IDInterprete;
    int genero;
    int reproducciones;
    int likes;
    bool estado;

public:
    int getIDCancion();
    char* getTitulo(); //nose si hacerlo const o no
    int getIDInterprete();
    int getGenero();
    int getReproducciones();
    int getLikes();
    bool getEstado();

    void setTitulo(const char* _titulo);
    void setIDArtista(int _IDInterprete);
    void setGenero(int _genero);
    void setEstado(int _estado);

    void cargarCancion();
    void mostrarCancion();

    bool escribirDisco(int pos); //nose si vamos a usar estas funciones
    bool leerDisco(int pos);
};
