/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    21/03/2020 **/
#include <iostream>
#include <cmath>
using namespace std;
class vector3d
{
private:
    int x, y, z, norma;
public:
    vector3d(int a, int b, int c){x = a; y = b; z = c;}
    bool igualv(vector3d b);
    bool iguald(vector3d *a, vector3d *b);
    bool igualr(vector3d &b);
    void imprimir();
    void calcnor();
    bool normax(vector3d b);
    void vernor();
};
bool vector3d::igualv(vector3d b)
{
    if(x == b.x && y == b.y && z == b.z)
        return true;
    else
        return false;
}
bool vector3d::iguald(vector3d *a, vector3d *b)
{
    if(a->x == b->x && a->y == b->y && a->z == b->z)
        return true;
    else
        return false;
}
bool vector3d::igualr(vector3d &b)
{
    if(x == b.x && y == b.y && z == b.z)
        return true;
    else
        return false;
}
void vector3d::imprimir()
{
    cout << "(" << x << ", " << y << ", " << z << ")\n";
}
void vector3d::calcnor()
{
    norma = x*x + y*y + z*z;
}
bool vector3d::normax(vector3d b)
{//devuelve verdadero si la norma del objeto invocador es la mayor, de lo contrario false.
    if(norma > b.norma)
        return true;
    else
        return false;
}
void vector3d::vernor()
{
    cout << norma;
}
int main()
{//Prueba de funciones igual() entre dos vectores
    int x, y, z;
    cout << "1. Ingrese x, y, z: ";
    cin >> x >> y >> z;
    vector3d v(x, y, z);
    cout << "2. Ingrese x, y, z: ";
    cin >> x >> y >> z;
    vector3d v2(x, y, z);
    if(v.igualv(v2))
        cout << "Los vectores son iguales, funcion por valor. \n";
    else
        cout << "Son diferentes, (v).\n";
    v.imprimir();v2.imprimir();
    if(v.iguald(&v, &v2))
        cout << "Los vectores son iguales, funcion por dirección. \n";
    else
        cout << "Son diferentes, (d).\n";
    v.imprimir(); v2.imprimir();
    if(v.igualr(v2))
        cout << "Los vectores son iguales, funcion por referencia. \n";
    else
        cout << "Son diferentes, (r).\n";
    v.imprimir();v2.imprimir();

    v.calcnor();
    v2.calcnor();

    if(v.normax(v2))
    {
        cout << "\nEl vector "; v.imprimir();
        cout << " es el de la norma mayor = "; v.vernor();
    }
    else
    {
        cout << "\nEl vector "; v2.imprimir();
        cout << " es el de la norma mayor = "; v2.vernor();
    }

    return 0;
}
