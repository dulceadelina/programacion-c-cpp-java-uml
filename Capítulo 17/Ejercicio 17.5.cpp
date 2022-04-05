/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    21/03/2020 **/
#include <iostream>
using namespace std;
class Punto3d
{
public:
    Punto3d(int xx = 0, int yy = 0, int zz = 0):x(xx), y(yy), z(zz){;}
    void imprimirPunto();
    friend Punto3d suma2p(const Punto3d &a, const Punto3d &b);
private:
    int x, y, z;
};
void Punto3d::imprimirPunto()
{
    cout << x << ", " << y << ", " << z << endl;
}
Punto3d suma2p(const Punto3d &a, const Punto3d &b)
{
    Punto3d sm(a.x + b.x, a.y + b.y, + a.z + b.z);
    return sm;
}
int main()
{
    Punto3d u(3, 1, -6), v(1, 2, 4);
    Punto3d S;
    S = suma2p(u, v);
    S.imprimirPunto();
    return 0;
}
