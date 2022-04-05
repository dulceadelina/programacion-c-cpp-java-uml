/** Dulce 01/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>

FILE *pf1, *pf2;
char org[] = "C:LICENCIA.EST";
char dst[] = "C:RESUMEN.REC";

int main()
{
    pf1 = fopen(org, "rt");
    pf2 = fopen(dst, "wb");
    if(pf1 == NULL || pf2 == NULL)
    {
        puts("Eerror al abrir los archivos.");
        exit(1);
    }
    return 0;
}



