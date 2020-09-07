#include "pila.hpp"
#include <iostream>
#include <string>
using namespace std;
void Cadenas()
{
    pila<string> stringpila;
    const size_t stringpilatam = 5;
    double stringvalor = 1.1;
    cout << "\n-->Insertar elementos en stringpila\n";
    for (size_t i = 0; i < stringpilatam; ++i)
    {
        string stringtemp = "C++" + to_string(i);
        stringpila.insertar(stringtemp);
        cout << stringtemp << ' ';
    }
    cout << "\n<-- Extraer elementos de stringpila\n";
    while (!stringpila.estavacia())
    {
        cout << stringpila.arriba() << ' ';
        stringpila.extraer();
    }
}