/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    21/03/2020 **/
#include <iostream>
using namespace std;
class matrix
{
public:
    matrix(float xx = 0, float yy = 0):x(xx), y(yy){;}
    void imprimirvec() const;
    matrix operator + (const matrix &b) const;
    matrix operator - ();
    matrix operator - (const matrix &b) const;
private:
    float x, y;
};
void matrix::imprimirvec() const
{
    cout << x << ", " << y << endl;
}
matrix matrix::operator+(const matrix &b) const
{
    return matrix(x + b.x, y + b.y);
}
matrix matrix::operator-()
{
    return matrix(-x, -y);
}
matrix matrix::operator-(const matrix &b) const
{
    return *this + (-b);
}
int main()
{
    matrix u(3, 1), v(1, 2);
    matrix suma, neg, difer;
    suma = u + v;
    suma.imprimirvec();
    neg = -suma;
    neg.imprimirvec();
    difer = u - v;
    difer.imprimirvec();
    return 0;
}
