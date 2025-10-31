#pragma once

class Manager{
public:
    void intentarRegistro(const char* nombre, const char* apellido, const char* dni, const char* mail, const char* telefono);
    void intentarLogin(int ID, const char* mail);
};
