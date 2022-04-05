/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 20: Excepciones
    31/03/2020 **/
#include <iostream>
#include <cstdlib>
#include <cfloat>
using namespace std;
enum calculadora {cociente_cero, rebasa_tipo};
class Calculator
{
private:
    float a;
    float b;
    char operacion;
public:
    Calculator(){a = 1; b = 2; operacion = '+';}
    Calculator(float operando1, float operando2, char c) : a(operando1), b(operando2), operacion(c) {}
    float Resultado()throw (calculadora)
    {
        float res;
        switch(operacion)
        {
            case '+':
                res = a+b;
                break;
            case '-':
                res = a - b;
                break;
            case '*':
                if(a >= FLT_MAX-1 || b >= FLT_MAX-1)
                {
                    throw rebasa_tipo;
                    break;
                }
                res = a*b;
                break;
            case '/':
                if(b == 0)
                {
                    throw cociente_cero;
                    break;
                }
                res = a/b;
                break;
            default:
                break;
        }
        return res;
    }
};
int main()
{
    float r;
    try{
        Calculator c(122345678901234567890123456789012345678901234567890123456789012345678901234567890.1, 12345678901234567890123456789012345678901234567890123456789012345678901234567890, '*');
        r = c.Resultado();
        cout << r << "\n";
    }
    catch(calculadora d)
    {
        switch(d)
        {
            case rebasa_tipo:
                cerr << d;
                cout << "El número sobrepasa los límites del tipo\n";
                break;
            case cociente_cero:
                cerr << d;
                cout << "División entre 0 da infinito\n";
                break;
        }
    }

    return 0;
}
