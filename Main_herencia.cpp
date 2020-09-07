#include <iostream>
#include "Persona.hpp"
#include "Maestro.hpp"
#include "Alumno.hpp"
using namespace std;
int main(){
    Persona p("Martin","Cuellar",Persona::TipoGenero::Masculino);
    cout<<p.obtenernombre()<<" (";
    cout<<(p.obtenergenero()==0?"Hombre":"Mujer")<<" )"<<endl;
    Maestro m("Martin","Cuellar",Persona::TipoGenero::Masculino,"12345");
    cout<<m.obtenernombre()<<"#"<<m.obtenernumero()<<"( ";
    cout<<(m.obtenergenero()==Persona::TipoGenero::Masculino?"Hombre":"Mujer")<<")"<<endl;
    Alumno a("Gabriel", "Vasquez",Persona::TipoGenero::Masculino,"67890");
    cout<<a.obtenernombre()<<"#"<<a.obtenernumerocuenta()<<endl;
}