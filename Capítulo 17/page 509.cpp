/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    21/03/2020 **/
#include <iostream>
#include <cmath>
using namespace std;
class Rect
{
private:
    double xco;
    double yco;
public:
    Rect(){xco = 0.0; yco = 0.0; }
    Rect(double x, double y) { xco = x; yco = y; }
    void visualizar()
    {
        cout << "(" << xco << ", " << yco << ")";
    }
};
class Polar
{
private:
    double radio;
    double angulo;
public:
    Polar() { radio = 0.0; angulo = 0.0; }
    Polar(double r, double a) { radio = r; angulo = a; }
    void visualizar()
    {
        cout << "(" << radio << ", " << angulo << ")";
    }
    operator Rect()
    {
        double x = radio * cos(angulo);
        double y = radio * sin(angulo);
        return Rect(x, y);
    }
};
int main()
{
    Rect rec;
    Polar pol(100.0, 0.785398);
    rec = pol;
    cout << "\n polar = "; pol.visualizar();
    cout <<"\n rectang = "; rec.visualizar();
    return 0;
}
