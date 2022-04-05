/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	13/02/2019 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int extraer(char *dest, const char *fuente, int num_cars);

void main(void)
{
    char s1[81];
    char* s2;
    int n;

    printf("\n\tCadena a analizar ?:");
    gets(s1);
    do{
        printf("Número de caracteres a extraer: ");
        scanf("%d", &n);
    }while(n < 1 || n > strlen(s1));
    s2 = malloc((n+1)*sizeof(char));
    extraer(s2, s1, n);
    printf("Cadena extraída \"%s\"", s2);
}
int extraer(char *dest, const char *fuente, int num_cars)
{
    int cuenta;
    for(cuenta = 1; cuenta <= num_cars;cuenta++)
        *dest++ = *fuente++;
    *dest = '\0';
    return cuenta;
}
