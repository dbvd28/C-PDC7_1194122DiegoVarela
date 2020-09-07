#include "Alumnop.hpp"
#include "Personap.hpp"
#include <string>
#include <iostream>
using namespace std;
Alumnop::Alumnop(string nombre, string apellido, string numerocuenta, double mesada) : Personap(nombre, apellido)
{
    this->numerocuenta = numerocuenta;
    this->mesada = mesada;

}
    string Alumnop::obtenernumero()
    {
     return numerocuenta;   
    }
    double Alumnop::ingresos() const {return mesada;}
    void Alumnop::imprimir() const{
    cout<<"Alumno con mesada: ";
    Personap::imprimir();
    cout<< "| Mesada: "<<mesada<<endl;
    }