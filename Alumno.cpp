#include "Alumno.hpp"
#include "Persona.hpp"
Alumno::Alumno(string nombre,string apellido,Persona::TipoGenero genero,string numerocuenta):Persona(nombre,apellido,genero){
    this->numerocuenta=numerocuenta;
}
string Alumno:: obtenernumerocuenta(){
    return numerocuenta;
}