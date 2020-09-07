#include "Persona.hpp"
Persona::Persona(string nombre,string apellido,TipoGenero genero){
    this->nombre=nombre;
    this->apellido=apellido;
    this->genero=genero;
}
string Persona:: obtenernombre(){return nombre;}
Persona:: TipoGenero Persona::obtenergenero(){return genero;}