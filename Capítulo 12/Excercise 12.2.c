/** Dulce 02/03/2020
    CAP?TULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
int main()
{
    int c, n = 0;
    FILE* pf;
    char *nombre = " bbbb
    bbbSALIDA.txt";

    if((pf = fopen(nombre, "rt")) == NULL)
    {
        puts("ERROR EN LA OPERACION DE APERTURA");
        return 1;
    }
    while((c = getc(pf)) != EOF)
    {
        if(c == '\n')
        {
            n++; printf("\n");
        }
        else
        {
            putchar(c);
        }

    }
    printf("\nNumero de lineas del archivo: %d", n);
    fclose(pf);
    return 0;
}
