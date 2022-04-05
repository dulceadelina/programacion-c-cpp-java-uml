/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    21/03/2020 **/
#include <iostream>
using namespace std;
class Unitaria
{
    int x;
    public:
        Unitaria(){x = 0;}
        Unitaria(int a) {x = a;}
        friend Unitaria& operator++(Unitaria&y);
        void visualizar() {cout << x << "\n"; }
};
Unitaria& operator++(Unitaria& y)
{
    y.x = y.x + 2;
    return y;
}
int main()
{
    Unitaria ejemplo = 65;
    for(int i = 5; i > 0; i--)
    {
        ++ejemplo;
        ejemplo.visualizar();
    }
    return 0;
}
