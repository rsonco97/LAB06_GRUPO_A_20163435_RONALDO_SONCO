/*EJERCICIO 2
Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre 
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe 
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un 
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la 
asignatura de Ciencias de la Computación II.*/
#include <iostream>
#include "alumnounsa.h"
using namespace std;

int main()
{
    cout <<"Alumno: "<< endl;
    alumnounsa al1=alumnounsa(20163435,"Randu S",11.2,10,12);
    al1.imprimir();
    al1.promedio();
    alumnounsa al2 = alumnounsa(20173340, "Javier M", 10.2, 3, 5.6);
    al2.imprimir();
    al2.promedio();
    return 0;
}