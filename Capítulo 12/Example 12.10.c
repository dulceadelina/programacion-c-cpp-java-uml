/** Dulce 02/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <string.h>

FILE *pg;
char nom[] = "PLUVIO.DAT";
char buf[121];
int n1 = 0;

int main()
{
    if((pg = fopen(nom, "rt")) == NULL)
    {
        puts("Error al abrir el archivo");
        exit(-1);
    }
    /// ...
    rewind(pg);
}
