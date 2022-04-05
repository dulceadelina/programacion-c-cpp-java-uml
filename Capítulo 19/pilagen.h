/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 19: Genericidad: plantillas (templates)
    25/03/2020 **/
#ifndef PILAGEN4_H
#define PILAGEN4_H
#include <iostream>
using namespace std;
template <class Tipo>
class Pila
{
public:
    Pila();
    Pila(const unsigned n);
    ~Pila();
    void Vaciar();
    void Poner(const Tipo &x);
    Tipo Quitar();
    Tipo Cima() const;
    bool Vacia() const;
    bool Llena() const;
    void Visualizar();
private:
    unsigned maxi;
    unsigned cima;
    Tipo *valor;
};
template <class Tipo>
Pila<Tipo>::Pila(): maxi(100), cima(0), valor(new Tipo[maxi]){}
template <class Tipo>
Pila<Tipo>::Pila(const unsigned n): maxi(n), cima(0), valor(new Tipo[maxi]) {}
template <class Tipo>
Pila <Tipo>::~Pila()
{
    delete []valor;
}
template <class Tipo>
void Pila<Tipo>::Vaciar()
{
    cima = 0;
}
template <class Tipo>
void Pila<Tipo>::Poner(const Tipo &x)
{
    valor[cima++] = x;
}
template <class Tipo>
Tipo Pila<Tipo>::Quitar()
{
    return valor[cima--];
}
template <class Tipo>
Tipo Pila<Tipo>::Cima() const
{
    return valor[cima-1];
}
template <class Tipo>
bool Pila<Tipo>::Llena() const
{
    return (cima >= maxi);
}
template <class Tipo>
bool Pila<Tipo>::Vacia() const
{
    return cima = 0;
}
template <class Tipo>
void Pila<Tipo>::Visualizar()
{
    for(int i = 0; i < cima; i++)
        cout << "'" << valor[i] << "'\n";
}
#endif // PILAGEN4_H
