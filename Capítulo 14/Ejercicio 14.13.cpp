/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 14: Diseño de clases y objetos: representación gráfica en UML
    18/03/2020 **/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Aleatorio
{
    int n;

public:
    void generaAleatorio(int, int);
};
void Aleatorio::generaAleatorio(int a, int b)
{
    int seed;
    srand(time(NULL));
    seed = rand() % b + a;
    n = seed;
    cout << n << "\n";
}
int main()
{
    Aleatorio a;
    a.generaAleatorio(1, 100);
    return 0;
}
