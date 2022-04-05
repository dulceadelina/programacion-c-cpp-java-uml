/** Dulce 01/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    char nm[]=  "C:LICENCIA.EST";
    pf = fopen(nm, "r");
    if(pf == NULL)
    {
        puts("Error al abrir el archivo.");
        exit(1);
    }
    return 0;
}
