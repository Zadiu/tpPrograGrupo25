#include <iostream>
#include <limits>
#include <string>
#include "menu.h"
using namespace std;

void mostrarOpcionesNormal();
void mostrarOpcionesAdmin();
void ejecutarOpcion();

Menu::Menu(Manager& _manager) : m(_manager){}

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

void Menu::pedirDatosRegistro(){
    int id;
    char nombre[40], apellido[40], dni[12], telefono[20], mail[60];
    bool suscriptor;

    cout<<"-----Registrate-----"<<endl;
    cout<<"ID: "<<endl;
    cin>>id;
    cout<<"Nombre: ";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(nombre, 40);
    cout<<"Apellido: ";
    cin.getline(apellido, 40);
    cout<<"DNI: ";
    cin.getline(dni, 12);
    cout<<"Telefono: ";
    cin.getline(telefono, 20);
    cout<<"Mail: ";
    cin.getline(mail, 60);

    m.intentarRegistro(id, nombre, apellido, dni, mail, telefono);
}

void Menu::pedirDatosLogin(){
    int id;
    char mail[60];
    cout<<"---Inicia sesion con tus datos---"<<endl;
    cout<<"MAIL:";
    cin>>mail;
    cout<<"ID: ";
    cin>>id;

    // m.intentarLogin(id,mail);

}
void Menu::manejarMenuInicio(){
    int opc;
    do{
    cout<<"---SISTEMA DE REPRODUCCIÓN DE MUSICA---"<<endl;
    cout<<"1. Iniciar sesion"<<endl;
    cout<<"2. Registrarse"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"----------------------------------------"<<endl;

    opc=pedirOpcion();

    if(opc==1){
        pedirDatosLogin();
    }
    else if(opc==2){
        pedirDatosRegistro();
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

