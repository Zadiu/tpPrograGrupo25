#pragma once

class Interaccion {
    private:
    int id;
    int idUsuario;
    int idCancion;
    int tipo; // 1=Reproduccion 2= me gusta 3= skip 4= agregado 5= eliminar
    int idPlaylist;
    bool estado;
    public:
    // getters setters
    long getID();
    int getIDUsuario();
    int getIDCancion();
    int getTipo();
    int getIDPlaylist();
    bool getEstado();

    //setters
    void setID(int _id);
    void setIDUsuario (int _idUsuario);
    void setIDCancion (int _idCancion);
    void setTipo(int _tipo);
    void setIDPlaylist(int _idPlaylist);
    void setEstado(bool _estado);

    // metodos irian en el managerr
    void cargar();
    void mostrar();

    /*  por verse
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
    */
};