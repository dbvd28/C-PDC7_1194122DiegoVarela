#include "Maestrp.hpp"
#include "Personap.hpp"
#include <string>
#include <iostream>
using namespace std;
Maestrp::Maestrp(string nombre, string apellido, string numerotalento, double salario) : Personap(nombre, apellido)
{
    this->numerotalento = numerotalento;
    this->salario = salario;

}
    string Maestrp::obtenernumero()
    {
     return numerotalento;   
    }
    double Maestrp::ingresos() const {return salario;}
    void Maestrp::imprimir()const{
    cout<<"Empleado asalariado; ";
    Personap::imprimir();
    cout<< "| Salario: "<<salario<<endl;
    }
