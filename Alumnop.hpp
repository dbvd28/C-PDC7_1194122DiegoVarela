#pragma once
#include <string>
#include "Personap.hpp"
class Alumnop:public Personap{
    string numerocuenta;
    double mesada;
    public:
    Alumnop(string Nombre,string Apellido,string numerocuenta,double mesada);
    string obtenernumero();
     virtual double ingresos() const override;
    virtual void imprimir() const override;
};