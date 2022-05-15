#include "alumnounsa.h"
#include "iostream"
#include "string"
using namespace std;

alumnounsa::alumnounsa(int _cui, string _name, float _n1,float _n2,float _n3)
{
    cui = _cui;
    nombres = _name;
    n1 = _n1;
    n2 = _n2;
    n3 = _n3;
}
alumnounsa::~alumnounsa()
{
}
void alumnounsa::imprimir() {
    cout <<cui<<" " << nombres << endl;
}
void alumnounsa::promedio() {
    float prom=(n1+n2+n3)/3;
    if (prom>=10.5) {
        cout << "si aprobo" << endl;
    }
    else {
        cout << "No aprobo" << endl;
    }
}
