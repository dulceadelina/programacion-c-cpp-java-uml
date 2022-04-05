/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 20: Excepciones
    31/03/2020 **/
#include <iostream>
using namespace std;
enum calculadora {cociente_cero, rebasa_tipo};
class Calculator throw (calculadora)
{
private:
    float operando1;
    float operando2;
    char operacion;
public:
    Calculator(){operando1 = 1; operando2 = 2; operacion = '+';}
    Calculator(float a, float b, char c) : operando1(a), operando2(b), operacion(c) {}
    float Resultado()
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
                if(a >= INT_MAX && b >= INT_MAX)
                    throw rebasa_tipo;
                res = a*b;
                break;
            case '/':
                if(b == 0)
                    throw cociente_cero;
                res = a/b;
                break;
            default:
                break;
        }
        return res;
    }
}
int main()
{
    Calculator c;
    try
    {

    }
    return 0;
}
