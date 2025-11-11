#pragma once

class Usuario {
private:
    int id;
    char nombre[40];
    char apellido [40];
    char dni[12];
    char telefono[20];
    char mail[60];
    bool suscriptor;
    bool estado;
public:
    //constructor
    Usuario();
    Usuario(int _id, const char* _nombre, const char* _apellido, const char* _dni, const char* _telefono, const char* _mail);

    // getters
    int getID();
    char* getNombre();
    char* getApellido();
    char* getDNI();
    char* getTelefono();
    char* getMail();
    bool getSuscriptor();
    bool getEstado();

    // setters
    void setNombre(const char* _nombre);
    void setApellido(const char* _apellido);
    void setTelefono(const char* _telefono);
    void setMail(const char* _mail);
    void setSuscriptor(bool _suscriptor);
    void setEstado(bool _estado);

    /* DISCO
    bool escribirDiscor(int pos);
    bool leerDisco(int pos);
    */
};
