/** Dulce Adelina Zuñiga Ramos
    25/10/2019 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n = 0;
    char linea[100];
    char* apc[2];

    printf("Ingrese una cadena de 100 caracteres: ");
    gets(linea);
    n = strlen(linea) + 1;
    apc[0] = (char*)malloc(n*sizeof(char));
    strcpy(apc[0], linea);
    linea[0] = '\0';

    printf("\nIngrese otra línea de caracteres: ");
    gets(linea);
    n = strlen(linea) + 1;
    strcpy(apc[1], linea);
    puts(linea);
    apc[1] = (char*)malloc(n*sizeof(char));

    printf("\n\nImpresión con arreglos");
    printf("%s\n", apc[0]);
    printf("%s\n", apc[1]);

    return 0;
}
