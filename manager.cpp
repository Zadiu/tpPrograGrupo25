#include <iostream>
#include <cstdio>
#include <cstring>
#include "usuario.h"
#include "manager.h"
using namespace std;

bool Manager::cargarDatosDesdeArchivos();
void Manager::agregarUsuario(const Usuario& nuevoUsuario);

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
}
// bool Manager::intentarLogin(int ID, const char* mail){
    //abro el archivo para revisar q coincidan los datos

