#include "pila.hpp"
#include <iostream>
using namespace std;
void Dobles()
{
    pila<double> doublepila;
    const size_t doublepilatam = 5;
    double doublevalor = 1.1;
    cout << "\n-->Insertar elementos en doublepila\n";
    for (size_t i = 0; i < doublepilatam; ++i)
    {
        doublepila.insertar(doublevalor);
        cout << doublevalor << ' ';
        doublevalor += 1.1;
    }
    cout << "\n<-- Extraer elementos de doublepila\n";
    while (!doublepila.estavacia())
    {
        cout << doublepila.arriba() << ' ';
        doublepila.extraer();
    }
}