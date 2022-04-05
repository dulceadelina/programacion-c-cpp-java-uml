/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 18: Clases derivadas: herencia y polimorfismo
    23/03/2020 **/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//clase base
class Base
{
public:
    virtual void f() {cout << "f() : clase base-! \n"; }
    void g() { cout << "g():clase base-! \n"; }
};
class Derivada1 : public Base{
public:
    virtual void f() {cout << "f(): clase Derivada-!\n";}
    virtual void g() { cout << "g():clase derivada-! \n"; }
};
class Derivada2 : public Derivada1{
public:
    virtual void f() { cout << "f() : clase Derivada2-!\n";}
    virtual void g() { cout << "g():clase derivada2-! \n"; }
};
int main()
{
    Base b;
    Derivada1 d1;
    Derivada2 d2;
    Base *p = &b;
    p -> f();
    p -> g();
    p = &d1;
    p -> f();
    p -> g();
    p = &d2;
    p -> f();
    p -> g();

    return 0;
}
