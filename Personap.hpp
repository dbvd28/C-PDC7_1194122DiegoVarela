#pragma once
#include<string>
using namespace std;
class Personap{
    public:
    Personap(string nombre,string apellido);
    string obtenernombre(); 
    virtual double ingresos()const =0;
    virtual void imprimir() const;
    private:
    string Nombre,Apellido;
};