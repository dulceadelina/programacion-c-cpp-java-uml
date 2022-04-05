/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 19: Genericidad: plantillas (templates)
    25/03/2020 **/
#include <iostream>
#include "pilagen.h"
using namespace std;
int main()
{
    //Pila de complejos
    Pila <string> p1(5);
    p1.Poner("Prueba primera");
    p1.Poner("Prueba segunda");
    p1.Poner("Prueba tercera");
    cout << "Número de elementos: " << p1.Cima() << "\n";
    p1.Visualizar();
    return 0;
}
