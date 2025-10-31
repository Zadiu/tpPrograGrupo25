#include <iostream>
#include <limits>
#include "menu.h"
using namespace std;

Menu::Menu(Manager& m) : _manager(m){}
int Menu::pedirOpcion(){
    int opc;
    bool entradaValida=false;

    while(!entradaValida){
    cout<<"Ingresa una opcion: ";

    //pide el dato y verifica que la opc ingresada corresponda con su tipo de dato (int)
    if(cin>>opc){
        entradaValida=true;
        return opc;
    }
    else{
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //descarta todos los caracteres que haya en el búfer de entrada hasta encontrar un salto de línea ('\n'),
        cout<<"Ingresa una opcion valida"<<endl;
    }
    }
}

void Menu::pedirDatosLogin(Manager& m){
    int id;
    char mail[60];
    cout<<"---Inicia sesion con tus datos---"<<endl;
    cout<<"MAIL:";
    cin>>mail;
    cout<<"ID: ";
    cin>>id;

    // m.intentarLogin(id,mail);

}
void Menu::manejarMenuInicio(Manager& m){
    int opc;
    do{
    cout<<"---SISTEMA DE REPRODUCCIÓN DE MUSICA---"<<endl;
    cout<<"1. Iniciar sesion"<<endl;
    cout<<"2. Registrarse"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"----------------------------------------"<<endl;

    opc=pedirOpcion();

    if(opc==1){
        pedirDatosLogin(m);
    }
    else if(opc==2){
        //pedirDatosRegistro();
    }
    else{
        cout<<"Gracias por usar nuestra aplicacion!"<<endl;
    }
    }while(opc!=0);
}

void Menu::manejarMenu(){
    //maneja todo lo q tiene q ver con menu
    manejarMenuInicio();
}

void mostrarOpcionesNormal();
void mostrarOpcionesAdmin();
void ejecutarOpcion();
void pedirDatosRegistro();
