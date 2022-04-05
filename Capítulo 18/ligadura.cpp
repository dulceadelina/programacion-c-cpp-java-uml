/** Dulce Adelina Zu�iga Ramos
    CAP�TULO 18: Clases derivadas: herencia y polimorfismo
    23/03/2020 **/
#include <iostream>
using namespace std;
class A
{
public:
    A(){}
    virtual void Dinamica()
    {
        cout << "Funci�n din�mica de la clase A \n";
    }
    void Estatica()
    {
        cout << "Funci�n est�tica de la clase A\n";
    }
};
class B : public A
{
public:
    B(){}
    void Dinamica()
    {
        cout << "Funci�n din�mica de clase B \n";
    }
    void Estatica()
    {
        cout << "Funci�n est�tica de clase B \n";
    }
};
int main()
{
    A *a;
    B *b;

    a = new A();
    b = new B();
    cout << "Funciones del objeto a de la clase A\n";
    a ->Dinamica();
    a ->Estatica();
    cout << "\n";
    cout << "Funciones del objeto b de la clase B\n";
    b ->Dinamica();
    b ->Estatica();
    cout << "\n";
    a = b;
    cout << "Funciones del objeto a de la clase A\n"
        << "al que se ha asignado un valor de la clase b\n";
    a ->Dinamica();
    a ->Estatica();
    return 0;
}
