/** Dulce Adelina Zu�iga Ramos
    CAP�TULO 14: Dise�o de clases y objetos: representaci�n gr�fica en UML
    18/03/2020 **/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Empleado
{
    int id_empleado;
    char nombre[100];
 public: void leerDatos();
    void verDatos();
};
void Empleado::leerDatos()
{
    int n;
    char e[100];
    cout << "Ingrese el n�mero de empleado: ";
    cin >> n;
    cout << "Ingrese el nombre: ";
    cin >> e;
    id_empleado = n;
    strcpy(nombre, e);
}
void Empleado::verDatos()
{
    cout << "Id empleado: " << id_empleado << "\n";
    cout << "Nombre: " << nombre << endl;
}
int main()
{
    int n = 5;
    Empleado e[50];
    for(int i = 0; i < 50; i++) e[i].leerDatos();
    for(int i = 0; i < 50; i++) e[i].verDatos();
    return 0;
};
