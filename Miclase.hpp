#include <string>
using namespace std;
class Miclase{
    string nombre;
    public:
    Miclase(string nombre){this->nombre=nombre;}
    string obtenernombre(){return nombre;}
    friend ostream& operator<<(ostream& out,const Miclase& mc);
};
ostream& operator <<(ostream& out,const Miclase& mc){
    return out<<mc.nombre;
}