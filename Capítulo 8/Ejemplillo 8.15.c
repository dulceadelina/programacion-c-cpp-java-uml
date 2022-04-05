/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	13/02/2019 */
#include <stdio.h>
#include <string.h>

void main(void)
{
    char s[ ] = "IJKLMN";
    char bufer[81];
    printf("strlen(%s) = %d\n", s, strlen(s));
    printf("strlen(\"\") = %d\n", strlen(" "));
    printf("Introduzca una cadena: ");
    gets(bufer);
    printf("strlen (%s) = %d", bufer, strlen(bufer));
}
