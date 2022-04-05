/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 20: Excepciones
    30/03/2020 **/
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
enum error {no_raices_reales, coeficiente_a_cero};
void raices(float a, float b, float c, float &r1, float &r2) throw(error)
{
    float discr;
    if(b*b < 4*a*c)
        throw no_raices_reales;
    if(a == 0)
        throw coeficiente_a_cero;
    discr = sqrt(b*b - 4*a*c);
    r1 = (-b - discr) / 2*a;
    r2 = (-b + discr) / 2*a;
}
int main()
{
    float a, b, c, r1, r2;
    cout << "Introduzca coeficientes de la ecuación de segundo grado: ";
    cin >> a >> b >> c;
    try{
        raices(a, b, c, r1, r2);
        cout << "Raíces reales " << r1 << " " << r2 << "\n";
    }
    catch(error e)
    {
        switch(e)
        {
            case no_raices_reales:
                cout << "Ninguna raíz real" << endl;
                break;
            case coeficiente_a_cero:
                cout << "Primer coeeficiente cero " << endl;
                break;
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
