/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	27/03/2017 */
#include <stdio.h>
#include <stdlib.h>

void Convierte(char *cadena);

int main()
{
    char cadena[15];

    printf("Ingresa una número hexadecimal: ");
    scanf("%x", &cadena);
}

void Convierte(char *cadena)
{
    printf("\n %d", cadena);
    long int decimal;

    decimal = atol(cadena);
    printf("\n\n %d ", decimal);
}
