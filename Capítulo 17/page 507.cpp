/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    21/03/2020 **/
#include <iostream>
using namespace std;
class Binario
{
    int x;
public:
    Binario() { x = 0; }
    Binario(int a) {x = a;}
    Binario operator + (const Binario&) const;
    void visualizar() { cout << x << "\n"; }
};
Binario Binario::operator+(const Binario& a) const
{
    Binario aux;
    aux.x = x + a.x;
    return aux;
}
int main()
{
    Binario primero(2), segundo(5), tercero;
    tercero = primero + segundo;
    tercero.visualizar();
    return 0;
}
