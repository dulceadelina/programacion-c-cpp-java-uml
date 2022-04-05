/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    21/03/2020 **/
#include <iostream>
class radioMP3
{
private:
    int frecuencia;
    int volumen;
public:
    void iniciar(void);
    void aumentarfrec(void);
    void disminuirfrec(void);
    void bajarvol(void);
    void subirvol(void);
};
void radioMP3::iniciar(void)
{
    frecuencia = 99.99;
    volumen = 45;
}
void radioMP3::subirvol(void)
{
    volumen++;
}
void radioMP3::bajarvol(void)
{
    volumen--;
}
void radioMP3::disminuirfrec(void)
{
    frecuencia--;
}
void radioMP3::aumentarfrec(void)
{
    frecuencia++;
}
int main()
{
    radioMP3 miestacion;
    miestacion.iniciar();
    miestacion.subirvol();
    miestacion.bajarvol();
    miestacion.aumentarfrec();
    miestacion.disminuirfrec();
    return 0;
}
