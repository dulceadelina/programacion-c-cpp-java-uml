/*  Dulce Adelina Zuñiga Ramos
	11. Apuntadores (punteros)
	19/08/2017 */
#include <stdio.h>
void main()
{
    char *p;
    char CadenaTexto[81];
    puts("Introduzca cadena a convertir: ");
    gets(CadenaTexto);
    /* p aputna al primer carácter de la cadnea */
    p = &CadenaTexto[0]; // equivale a p = CadenaTexto
    /* Repetir mientras *p no sea cero */
    while(*p)
    {
        /* restar 32, constante de código ASCII */
        if((*p >= 'a') && (*p <= 'z'))
        {
            *p = *p - 32;
        }
        else
        {
            p++;        }
    }
    puts("La cadena convertida es: ");
    puts(CadenaTexto);
}
