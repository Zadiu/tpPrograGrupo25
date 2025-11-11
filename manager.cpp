#include <iostream>
#include <cstdio>
#include <cstring>
#include "usuario.h"
#include "manager.h"
using namespace std;

// inicializador del repositorio
Manager::Manager(Repositorio* repo) {
    _repo = repo;
} 

bool Manager::intentarRegistro(int idUsuario, const char* nombre, const char* apellido, const char* dni, const char* mail, const char* telefono){
    FILE *pFileUsuarios = fopen("usuarios.dat", "rb");

    if(pFileUsuarios==nullptr){
        cout<<"No se pudo abrir el archivo"<<endl;
        return false;
    }

    Usuario u;

    //aca va a leer para verificar q no exista un usuario con el mismo id o mail
    while(fread(&u, sizeof(u), 1, pFileUsuarios)){

        //verificar ID
        if(u.getID()==idUsuario){
            cout<<"Ya existe un usuario con ese id!"<<endl;

            fclose(pFileUsuarios);
            return false;
        }

        //verificar GMAIL
        if(strcmp(u.getMail(), mail)==0){
            cout<<"Ya existe un usuario con ese mail!"<<endl;

            fclose(pFileUsuarios);
            return false;
        }

    }
    Usuario nuevoUsuario(idUsuario, nombre, apellido, dni, telefono, mail);

    //luego agregamos el usuario al archivo .dat y luego a la ram, en ese orden
}
// bool Manager::intentarLogin(int ID, const char* mail){
    //abro el archivo para revisar q coincidan los datos


bool Manager::cargarDatosDesdeArchivos(){
    // verificar el repositorio
    if (!_repo) {
        cout << "Repositorio no inicializado." << endl;
        return false;
    }
    // abrir archivo de usuarios
    FILE *pFileUsuarios = fopen("usuarios.dat", "rb");

    if(pFileUsuarios==nullptr){
        cout<<"No se pudo abrir el archivo"<<endl;
        return false;
    }

    Usuario u;

    //leelos usuarios del archivo y los agrego al repositorio
    while(fread(&u, sizeof(Usuario), 1, pFileUsuarios) == 1){
        // agregar al repositorio mediante el puntero
        _repo -> agregarUsuario(u);
    }

    fclose(pFileUsuarios);
    return true;
}
void Manager::agregarUsuario(const Usuario& nuevoUsuario){
    FILE *pFileUsuarios = fopen("usuarios.dat", "ab");

    if(pFileUsuarios==nullptr){
        cout<<"No se pudo abrir el archivo"<<endl;
        return;
    }

    fwrite(&nuevoUsuario, sizeof(Usuario), 1, pFileUsuarios);
    fclose(pFileUsuarios);
}
