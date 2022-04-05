/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 19: Genericidad: plantillas (templates)
    30/03/2020 **/
#include <iostream>
using namespace std;
template <class T>
T absoluto (T v1)
{
    if(v1 < 0)
    {
        return v1*-1;
    }
    else if(v1 > 0)
    {
        return v1;
    }
    else
        return 0;
}
int main()
{
    int i = 321;
    float f = 4568.56;
    double d = 325415.123456;
    char c = 'a';
    cout << "Valor absoluto de i: " << absoluto(i) << "\n";
    cout << "Valor absoluto de f: " << absoluto(f) << "\n";
    cout << "Valor absoluto de d: " << absoluto(d) << "\n";
    cout << "Valor absoluto de c: " << absoluto(c) << "\n";
    return 0;
}
