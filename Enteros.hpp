#include "pila.hpp"
#include <iostream>
using namespace std;
void Enteros()
{
    pila<int> intpila;
    const size_t intpilatam = 10;
    int intvalor = 1;
    cout << "\n-->Insertar elementos en intpila\n";
    for (size_t i = 0; i < intpilatam; ++i)
    {
        intpila.insertar(intvalor);
        cout << intvalor << ' ';
        intvalor += 1;
    }
    cout << "\n<-- Extraer elementos de intpila\n";
    while (!intpila.estavacia())
    {
        cout << intpila.arriba() << ' ';
        intpila.extraer();
    }
}