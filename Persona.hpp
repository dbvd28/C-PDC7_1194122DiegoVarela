#pragma once
#include <string>
using namespace std;
class Persona{
    public:
    enum TipoGenero {Masculino,Femenino};
    Persona(string nombre, string apellido,TipoGenero genero){};
    string obtenernombre();
    TipoGenero obtenergenero();
    private:
    string apellido, nombre;
    TipoGenero genero;
};