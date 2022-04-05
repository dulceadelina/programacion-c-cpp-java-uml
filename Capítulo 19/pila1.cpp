/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 19: Genericidad: plantillas (templates)
    25/03/2020 **/
#include <iostream>
using namespace std;
// archivo pila1.cpp
enum estado_pila { OK, LLENA, VACIA};
template <class T> class Pila
{
public:
    Pila(int _longitud = 10);
    ~Pila() {delete[] tabla;}
    void Poner(T);
    T quitar();
    void visualizar();
    int num_elementos();
    int leer_long() {return longitud;}
private:
    int longitud;
    T* tabla;
    int cima;
    estado_pila estado;
};
template <class T> Pila <T>::Pila(int _longitud)
{
    longitud = _longitud;
    tabla = new T[longitud];
    cima = 0;
    estado = VACIA;
}
template <class T> void Pila<T>::Poner(T _elemento)
{
    if(estado != LLENA)
        tabla[++cima] = _elemento;
    else
        cout << " ***** Pila llena *****\n";
    if(cima >= longitud)
        estado = LLENA;
    else
        estado = OK;
}
template <class T> T Pila<T>::quitar()
{
    T elemento = 0;
    if(estado != VACIA)
        elemento = tabla[cima--];
    else
        cout << " ***** Pila vacía *****\n";
    if(cima <= 0)
        estado = VACIA;
    else
        estado = OK;
    return elemento;
}
template <class T> void Pila<T>::visualizar()
{
    for(int i = cima; i > 0; i--)
        cout << "[" << tabla[i] << "]\n";
}
template <class T> int Pila<T>::num_elementos()
{
    return cima;
}
int main()
{
    //Pila de enteros
    Pila <int> p1(6);
    p1.Poner(6);
    p1.Poner(12);
    p1.Poner(18);

    cout << "Número de elementos: " << p1.num_elementos() << "\n";
    p1.visualizar();

    cout << "Quitar 1: " << p1.quitar() << endl;
    cout << "Quitar 2: " << p1.quitar() << endl;
    cout << "Quitar 3: " << p1.quitar() << endl;
    cout << "Número de elementos: " << p1.num_elementos() << endl;
    cout << "Quitar 4: " << p1.quitar() << endl;

    cout << "\n";
    //Pila de enteros largos
    Pila <long> p2(6);
    p2.Poner(60000L);
    p2.Poner(1000000L);
    p2.Poner(2000000L);

    cout << "Número de elementos: " << p2.num_elementos() << endl;
    p2.visualizar();

    cout << "Quitar 1: " << p2.quitar() << endl;
    cout << "Quitar 2: " << p2.quitar() << endl;
    cout << "Quitar 3: " << p2.quitar() << endl;
    cout << "Número de elementos: " << p2.num_elementos() << endl;
    cout << "Quitar 4: " << p2.quitar() << endl;

    Pila <double> p3(6);

    p3.Poner(6.6);
    p3.Poner(12.12);
    p3.Poner(18.18);

    cout << "Número de elementos: " << p3.num_elementos() << endl;
    p3.visualizar();

    cout << "Quitar 1: " << p3.quitar() << endl;
    cout << "Quitar 2: " << p3.quitar() << endl;
    cout << "Quitar 3: " << p3.quitar() << endl;
    cout << "Número de elementos: " << p3.num_elementos() << endl;
    cout << "Quitar 4: " << p3.quitar() << endl;
}
