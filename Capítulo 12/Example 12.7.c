/** Dulce 02/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>

FILE *pf1, *pf2;

int main()
{
    pf1 = fopen("C:\\DATOS.DAT", "at");
    pf2 = fopen("C:\\TEMPS.RET", "wb");

    fclose(pf1);
    fclose(pf2);

    return 0;
}
