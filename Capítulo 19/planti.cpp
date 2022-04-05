/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 19: Genericidad: plantillas (templates)
    25/03/2020 **/
#include <iostream>
#include "minmax.h"
using namespace std;

int max(int a, int b);
double max(double a, double b);
char max(char a, char b);

int main()
{
    int e1 = 100; int e2 = 200;
    double d1 = 3.141592, d2 = 2.718283;
    char c1 = 'a', c2 = 'd';
    cout << "max(e1, e2) es igual a: " << max(e1, e2) << "\n";
    cout << "max(d1, d3) es igual a: " << max(d1, d2) << "\n";
    cout << "max(c1, c2) es igual a: " << max(c1, c2) << "\n";
    return 0;
}
