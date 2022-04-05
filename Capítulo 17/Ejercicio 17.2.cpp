/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    21/03/2020 **/
#include <iostream>
using namespace std;
class demoObj
{
private:
    int undato;
public:
    void fijardatos(int d)
    { undato = d; }
    void mostrardatos()
    { cout << "el dato es: " << undato << endl; }
};
int main()
{
    demoObj d1, d2;
    d1.fijardatos(2005);
    d2.fijardatos(2010);
    d1.mostrardatos();
    d2.mostrardatos();
    return 0;
}
