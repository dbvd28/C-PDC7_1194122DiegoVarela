#include "pila.hpp"
#include <iostream>
#include "Miclase.hpp"
#include <string>
using namespace std;
void Miclases()
{
    pila<Miclase> mcpila;
    const size_t mcpilatam = 10;
    cout << "\n-->Insertar elementos en mcpila\n";
    for (size_t i = 0; i < mcpilatam; ++i)
    {
        string stringtemp = "MC" + to_string(i);
        Miclase mctemp(stringtemp);
        mcpila.insertar(mctemp);
        cout << stringtemp << ' ';
    }
    cout << "\n<-- Extraer elementos de mcpila\n";
    while (!mcpila.estavacia())
    {
        cout << mcpila.arriba() << ' ';
        mcpila.extraer();
    }
}