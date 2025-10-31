#pragma once
#include "manager.h"

class Menu{
private:
    Manager& _manager;
    void mostrarOpcionesNormal();
    void mostrarOpcionesAdmin();
    int pedirOpcion();
    void ejecutarOpcion();
    void pedirDatosRegistro();
    void pedirDatosLogin(Manager& m);
public:
    void manejarMenuInicio();
    void manejarMenu(); //maneja todos los metodos de abajo
    Menu(Manager& m);
};
