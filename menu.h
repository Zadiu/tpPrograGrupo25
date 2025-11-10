#pragma once
#include "manager.h"

class Menu{
private:
    Manager& m;
    void mostrarOpcionesNormal();
    void mostrarOpcionesAdmin();
    int pedirOpcion();
    void ejecutarOpcion();
    void pedirDatosRegistro();
    void pedirDatosLogin();
public:
    void manejarMenuInicio();
    void manejarMenu(); //maneja todos los metodos de abajo
    Menu(Manager& _manager);
};
