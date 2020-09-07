#pragma once
#include <string>
#include "Persona.hpp"
class Maestro:public Persona{
    string numerotalentohumano;
    public:
    Maestro(string nombre, string apellido,Persona::TipoGenero genero,string talento);
    string obtenernumero();
};