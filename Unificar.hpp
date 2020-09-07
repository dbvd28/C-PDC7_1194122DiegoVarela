#pragma once
#include "pila.hpp"
#include "Miclase.hpp"
#include <iostream>
#include <string>
using namespace std;
class Unificar
{
public:
    void Tipos()
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
};