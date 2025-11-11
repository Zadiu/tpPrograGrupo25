#pragma once
#include "repositorio.h"
#include "usuario.h"
class Manager{
private:
    // puntero al repositorio
    Repositorio* _repo = nullptr ; // para ver si esta incializado;
public:
    // constructor
    Manager(Repositorio* repo = nullptr);
    //son booleanas pq devuelven true o false si la operacion se llevo a cabo con exito
    bool intentarRegistro(int idUsuario, const char* nombre, const char* apellido, const char* dni, const char* mail, const char* telefono);
    bool intentarLogin(int ID, const char* mail);
    bool cargarDatosDesdeArchivos();
    void agregarUsuario(const Usuario& nuevoUsuario);
};
