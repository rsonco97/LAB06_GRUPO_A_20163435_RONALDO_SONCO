/*EJERCICIO 3
Implemente un programa con clases que lea la fecha de nacimiento y la fecha de hoy 
y muestre por pantalla el nombre y la edad de la persona.
*/
#include <iostream>
#include "edadpersona.h"

using namespace std;

int main()
{
    cout << "EDAD DE UNA PERSONA" << endl;
    edadpersona edp1 = edadpersona(2022,05,15,1997,06,01,"Randu");
    edp1.edad();
    return 0;
}
