#pragma once
#include<string>
#include "Personap.hpp"
using namespace std;
class Maestrp:public Personap{
    string numerotalento;
    double salario;
    public:
    Maestrp(string nombre,string apellido,string numerotalento,double salario);
    string obtenernumero();
    virtual double ingresos() const override;
    virtual void imprimir() const override;
};
