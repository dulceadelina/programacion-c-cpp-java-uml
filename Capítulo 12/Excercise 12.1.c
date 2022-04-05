/** Dulce 02/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
int main()
{
    int c;
    FILE*  pf;
    char *salida = "SALIDA.TXT";
    if((pf = fopen(salida, "a")) == NULL)
    {
        puts("ERROR EN LA OPERACION DE APERTURA");
        return 1;
    }
    while((c=getchar())!= EOF)
    {
        putc(c, pf);
    }
    fclose(pf);
    return 0;
}
