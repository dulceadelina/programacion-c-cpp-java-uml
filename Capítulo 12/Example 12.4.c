/** Dulce 01/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>
FILE *ff;
char* arch = "C:JARDINES.DAT";
int main()
{
    if((ff = fopen(arch, "w")) == NULL)
    {
        puts("Error al abrir el archivo para escribir.");
        exit(-1);
    }
    return 0;
}

