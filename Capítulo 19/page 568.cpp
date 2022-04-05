/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 19: Genericidad: plantillas (templates)
    25/03/2020 **/
#include <iostream>
#include <cstdio>
using namespace std;
template <class T> T mini(T a, T b)
{
    if(a < b)
        return a;
    else
        return b;
}
class Numero
{
    long num;
public:
    Numero(long n): num(n){}
    long Valor()
    {
        return num;
    }
    int operator < (Numero n2)
    {
        return num < n2.Valor();
    }
};
int main()
{
    Numero nn1 = 15;
    Numero nn2 = 25;
    Numero nn3 = mini(nn1, nn2);
    printf("%d", nn3);

}
