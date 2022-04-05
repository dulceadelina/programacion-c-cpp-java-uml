/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	13/02/2019 */
#include <stdio.h>
#include <string.h>
void sgtepal(char* p);
void main()
{
    char linea[81];
    printf("\n\tIntroduce una linea de caracteres. \n");
    gets(linea);
    while(*linea)
    {
        puts(linea);
        sgtepal(linea);
    }
}

void sgtepal(char* p)
{
    int j;
    j = strlen(p) -1;
    while(j > 0 && p[j]!=' ')
        j--;
    p[j] = '\0';
}
