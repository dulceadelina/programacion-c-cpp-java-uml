/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 14: Diseño de clases y objetos: representación gráfica en UML
    18/03/2020 **/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
class Aleatorio
{
    int n;

    public generaAleatorio(int, int);
};
public Aleatorio::generaAleatorio(int a, int b)
{
    int seed;
    srand(unsigned time(null, ptr));
    seed = rand() % a + b;
    n = seed;
    cout << n << "\n";
}
int main()
{
    Aleatorio a;
    a.generaAleatorio(100, 2);
    return 0;
}
