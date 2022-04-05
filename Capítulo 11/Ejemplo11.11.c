/*  Dulce Adelina Zuñiga Ramos
	11. Apuntadores (punteros)
	23/08/2017 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char cad[121], *ptr;
    int lon;
    puts("\nIntroducir una línea de texto\n");
    gets(cad);

    lon = strlen(cad);
    ptr = (char*) malloc((lon+1) *sizeof(char));

    strcpy(ptr, cad);
    printf("ptr = %s", ptr);
    free(ptr);
}
