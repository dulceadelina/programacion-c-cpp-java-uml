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
        Unitaria& operator--()
        {
            --x;
            return * this;
        }
        void visualizar() {cout << x << "\n"; }
};
int main()
{
    Unitaria ejemplo = 65;
    for(int i = 5; i > 0; i--)
    {
        ejemplo.operator--();
        ejemplo.visualizar();
    }
    return 0;
}
