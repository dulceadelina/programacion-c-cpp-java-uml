/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    23/03/2020 **/
#include <iostream>
using namespace std;
const float PI = 3.14159265;
class obj_geom
{
public:
    obj_geom(float x = 0, float y = 0) : xC(x), yC(y) {}
    void imprimircentro() const
    {
        cout << xC << ", " << yC << endl;
    }
protected:
    float xC, yC;
};
class circulo:public obj_geom
{
public:
    circulo(float x_c, float y_c, float r)  : obj_geom(x_c, y_c)
    {
        radio = r;
    }
    float area() const {return PI * radio * radio; }
private:
    float radio;
};
class cuadrado : public obj_geom
{
public:
    cuadrado(float x_c, float y_c, float x, float y) : obj_geom(x_c, y_c)
    {
        x1 = x;
        y1 = y;
    }
    float area() const
    {
        float a, b;
        a = x1 - xC;
        b = y1 - yC;
        return 2 * (a*a + b*b);
    }
private:
    float x1, y1;
};
int main()
{
    circulo C(2, 2.5, 2);
    cuadrado cuad(3, 3.5, 4.37, 3.85);
    cout << "centro del círculo: "; C.imprimircentro();
    cout << "centro del cuadrado: "; cuad.imprimircentro();
    cout << "área del círculo: " << C.area() << "\n";
    cout << "área del cuadrado: " << cuad.area() << endl;
    return 0;
}
