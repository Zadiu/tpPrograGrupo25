#pragma once

const int MAX_INTERPRETES=70;

class Usuario {
private:
    int id;
    char nombre[40];
    char apellido [40];
    char dni[12];
    char telefono[20];
    char mail[60];
    bool esAdmin; //un usuario puede o no ser admin
    int interpretesSuscriptos[MAX_INTERPRETES]; //contiene los ID de artistas que sigue el usuario
    int cantInterpretesSuscriptos;
    bool estado;
public:
    //constructor
    Usuario();
    Usuario(int _id, const char* _nombre, const char* _apellido, const char* _dni, const char* _telefono, const char* _mail, bool esAdmin_);

    // getters
    int getID();
    char* getNombre();
    char* getApellido();
    char* getDNI();
    char* getTelefono();
    char* getMail();
    bool getEsAdmin();
    const int* getInterpretesSuscriptos() const;
    int getCantInterpretesSuscriptos() const;
    bool getEstado();

    // setters
    void setNombre(const char* _nombre);
    void setApellido(const char* _apellido);
    void setTelefono(const char* _telefono);
    void setMail(const char* _mail);
    void setEstado(bool _estado);

    //metodos
    void agregarInterprete(int _idInterprete);
    void quitarInterprete(int _idInterprete);
    void estaSiguiendo(int _idInterprete);

    /* DISCO
    bool escribirDiscor(int pos);
    bool leerDisco(int pos);
    */
};
