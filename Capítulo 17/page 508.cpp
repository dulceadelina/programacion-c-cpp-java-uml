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
    friend Binario operator + (const Binario& a, const Binario& b);
    void visualizar() { cout << x << "\n"; }
};
Binario operator+(const Binario& a, const Binario& b)
{
    Binario aux;
    aux.x = a.x + b.x;
    return aux;
}
int main()
{
    Binario primero(8), segundo(4), tercero;
    tercero = primero + segundo;
    tercero.visualizar();
    return 0;
}
