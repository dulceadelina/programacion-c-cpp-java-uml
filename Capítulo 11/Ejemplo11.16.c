/** Dulce Adelina Zuñiga Ramos
    23/09/2019
    Programa ejercicio función realloc() **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *C1 = NULL, *C2 = NULL, B[121];
    char *clave = "COPIA";
    int tam;

    puts("\n\t Primera cadena ");
    gets(B);
    tam = (strlen(B)+ 1)*sizeof(char);
    C2 = (char*)realloc(C2, tam);
    strcpy(C2, B);
    if(strlen(clave) <= strlen(C2))
    {
        int j;
        char *R = NULL;
        R = realloc(R, s)
    }
}
