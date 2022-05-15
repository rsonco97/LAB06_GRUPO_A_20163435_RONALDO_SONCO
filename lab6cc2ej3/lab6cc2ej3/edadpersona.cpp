#include "edadpersona.h"
#include "iostream"
#include "string"
using namespace std;
edadpersona::edadpersona(int _Aact, int _Mact, int _Fact, int _Anac, int _Mnac, int _Fnac, string _name)
{
    Aact = _Aact;
    Mact = _Mact;
    Fact = _Fact;
    Anac = _Anac;
    Mnac = _Mnac;
    Fnac = _Fnac;
    name = _name;
}
edadpersona::~edadpersona()
{
}
void edadpersona::edad() {
    int respFech, respMes;
    if (Fact < Fnac) {
        Fact = Fact + 30;
        Mact = Mact - 1;
        respFech = Fact - Fnac;
    }
    else {
        respFech = Fact - Fnac;
    }if (Mact < Mnac) {
        Mact = Mact + 12;
        Aact = Aact - 1;
        respMes = Mact - Mnac;
    }
    else {
        respMes = Mact - Mnac;
    }cout << name << " Ud. tiene: " << endl;
    cout << " Edad: " << Aact - Anac <<" años" << endl;
}
