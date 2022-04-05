/** Dulce 02/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MX 121
#define MN 30

int main()
{
    FILE *in, *out;
    char nom1[] = "CARTAS.DAT";
    char nom2[] = "PRIMERO.DAT";
    char cad[MX];

    in = fopen(nom2, "r");
    out = fopen(nom1, "a");

    if(in == NULL || out == NULL)
    {
        puts("Error al abrir archivos. ");
        exit(-1);
    }
    while(fgets(cad, MX, in)) /**itera hasta que devuelva NULL*/
    {
        if(strlen(cad) >= MN)
            fputs(cad, out);
        else puts(cad);
    }
    fclose(in);
    fclose(out);

    return 0;
}
