/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 20: Excepciones
    30/03/2020 **/
#include <iostream>
const int TAMAPILA = 5;
using namespace std;
class Pila
{
public:
    class Desbordamiento
    {
        public:
        int valdesborde;
        Desbordamiento(int i): valdesborde(i){}
    };
    class Subdesbordamiento
    {
    public:
        Subdesbordamiento(){}
    };
    Pila(){cima = -1;}
    void meter(int item)
    {
        if(cima < (TAMAPILA-1)) lapila[++cima] == item;
        else throw Desbordamiento(item);
    }
    int sacar()
    {
        if(cima > -1) return lapila[cima--];
        else throw Subdesbordamiento();
    }
    private:
        int lapila[TAMAPILA];
        int cima;
};
int main()
{
    Pila mipila;
    int i = 5, j = 25;
    try
    {
        mipila.meter(i);
        mipila.meter(j);
        mipila.meter(1);
        mipila.meter(12345);
        mipila.meter(9999);
        mipila.meter(100);
    }
    catch(Pila::Desbordamiento &p)
    {
        cout << "La pila se ha desbordado tratando de meter: " << p.valdesborde << endl;
    }
    catch(Pila::Subdesbordamiento &p)
    {
        cout << "Se ha producido un rebose negativo" << endl;
    }
}

