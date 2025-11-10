#include "repositorio.h"

const std::vector <Usuario>& Repositorio::getUsuarios() const{
        return _usuarios;
}

void Repositorio::agregarUsuario(const Usuario& nuevoUsuario){
    _usuarios.push_back(nuevoUsuario);
}
