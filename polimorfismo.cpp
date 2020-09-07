#include <iostream>
#include "Personap.hpp"
#include "Maestrp.hpp"
#include "Alumnop.hpp"
#include <vector>
using namespace std;
int main()
{
    Maestrp m("martin", "nelbren", "12345", 1500);
    m.imprimir();
    Alumnop a("gabriel", "vasquez", "67890", 1000);
    a.imprimir();
    vector<Personap *> personas(2);
    personas[0] = dynamic_cast<Personap *>(&m);
    personas[1] = dynamic_cast<Personap *>(&a);
    for (Personap *personaptr : personas)
    {
        cout << personaptr->ingresos() << "->";
        personaptr->imprimir();
    }
}