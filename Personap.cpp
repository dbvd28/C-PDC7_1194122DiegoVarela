#include "Personap.hpp"
#include <iostream>
Personap::Personap(string Nombre,string Apellido){
    this->Nombre=Nombre;
    this->Apellido=Apellido;
}
string Personap::obtenernombre(){
    return Nombre;
}
void Personap:: imprimir()const{
    cout<<Nombre<<' '<<Apellido;
}
