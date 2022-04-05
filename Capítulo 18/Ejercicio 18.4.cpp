/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 18: Clases derivadas: herencia y polimorfismo
    23/03/2020 **/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//clase base
class Empleado
{
protected:
    int id_empleado;
    char nombre[100];
    char apellidos[100];
    int dia_nac, mes, anyo;
    int isste;
    float sueldo_base;
    enum estatus {alta, baja, licencia};
    estatus e;
    float aguinaldo;
public:
    Empleado(){}
    Empleado(int id, const char n[], const char a[])
    {
        cout<< "empleado ";
        id_empleado = id; cout << "id_empleado ";
        strcpy(nombre, n); cout << "nombre";
        strcpy(apellidos, a);
        dia_nac = 1;
        mes = 1;
        anyo = 1980;
        isste = 0;
        sueldo_base = 0;
        aguinaldo = 0;
        e = alta;
    }
    void ingresar_sueldo(){ cin >> sueldo_base; }
    void calcular_aguinaldo(float tasa) { aguinaldo = sueldo_base * tasa; }
    void ver_nombre() { cout << nombre; }
    void ver_sueldo() { cout << sueldo_base; }
};
class Administrativo : public Empleado
{
protected:
    string area_adm;
public:
    Administrativo(int i, const char n[], const char a[]) : Empleado(i, n, a){cout << "admvo";}
    Administrativo(string a){ area_adm = a; }
};
class Jefe_Administrativo : public Administrativo
{
protected:
    float aumento;
public:
    Jefe_Administrativo(int i, const char n[], const char a[]) : Administrativo(i, n, a) {cout << "jefe_Admvo";}
    virtual void calcular_aumento(){}
};
class Financieros : public Jefe_Administrativo
{
protected:
    string jefatura;
public:
    Financieros(int i, const char n[], const char a[]) : Jefe_Administrativo(i, n, a){ cout << "financieros";}
    void ingresar_jefatura(string j) { jefatura = j; }
    void calcular_aumento(){ cin >> aumento;}
};
int main()
{
   /* char *n = new char[100];
    char *a = new char[100];
    cout << "Ingrese nombre: ";
    cin >> n;
    cout << "Apellidos: ";
    cin >> a;*/
    Financieros f(123, "Dulce Adelina", "Zuñiga Ramos");
    f.ver_nombre();
    return 0;
}
