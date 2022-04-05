/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 14: Diseño de clases y objetos: representación gráfica en UML
    18/03/2020 **/
#include <iostream>
using namespace std;
//Declaración de datos miembro y fuciones miembro
class Fecha
{
    int dia, mes, anyo;
public:
    void fijarFecha(int, int, int);
    void mostrarFecha();
};
void Fecha::fijarFecha(int d, int m, int a)
{
    dia = d;
    mes = m;
    anyo = a;
}
void Fecha::mostrarFecha()
{
    cout << dia << "/" << mes << "/" << anyo;
}
// Prueba Fecha
int main()
{
    Fecha f;
    f.fijarFecha(20, 8, 2002);
    cout << "La fecha es: ";
    f.mostrarFecha();
    cout << endl;
    return 0;
}
