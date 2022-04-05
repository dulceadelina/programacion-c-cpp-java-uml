/** Dulce Adelina Zuñiga Ramos
    25/10/2019 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <algorithm>

int main()
{
    char* apc[2];
    char linea[100];
    printf("Ingrese una cadena de 100 caracteres: ");
    gets(linea);
    strcpy(apc[0], linea);
    puts(linea);
    std::fill(linea[0], linea[99], 0);
    puts(linea);
}
