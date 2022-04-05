/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	21/03/2017 */

#include <stdio.h>
#include <string.h>

void Reves(char *cadena);

int main()
{
    char cadena[30];
    printf("Ingresa una palabra... ");
    scanf("%s", &cadena);
    printf("\n");
    Reves(cadena);
}

void Reves(char *cadena)
{
    int tamano, i;
    tamano = strlen(cadena);

    for(i = tamano; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }
}
