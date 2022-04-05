/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 19: Genericidad: plantillas (templates)
    25/03/2020 **/
#include <iostream>
using namespace std;
// Definir una plantilla de función intercambio
template <class T>
void intercambio(T &v1, T &v2)
{
    T aux;
    aux = v1;
    v1 = v2;
    v2 = aux;
}
int main()
{
    int numero = 5, numero2 = 8;
    cout << "valores originales: " << numero << " " << numero2 << "\n";
    intercambio(numero, numero2);
    cout << "valores intercambiados: " << numero << " " << numero2 << "\n";
    //intercambio de caracteres
    char car1 = 'L', car3 = 'J';
    cout << "valores originales: " << car1 << " " << car3 << "\n";
    intercambio(car1, car3);
    cout << "valores intercambiados: " << car1 << " " << car3 << "\n";
    return 0;
}
