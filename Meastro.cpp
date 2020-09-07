#include "Maestro.hpp"
#include "Persona.hpp"
Maestro::Maestro(string nombre, string apellido,Persona::TipoGenero genero,string talento):  Persona(nombre,apellido,genero){
  this->numerotalentohumano=talento;
}
string Maestro::obtenernumero(){
    return numerotalentohumano;
}