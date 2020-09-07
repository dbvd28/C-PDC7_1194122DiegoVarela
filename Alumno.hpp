#pragma once
#include <string>
#include "Persona.hpp"
class Alumno:public Persona{
    string numerocuenta;
    public:
    Alumno(string nombre, string apellido,Persona::TipoGenero genero,string numerocuenta);
    string obtenernumerocuenta();

};