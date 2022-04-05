/** Dulce 05/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    printf("Número de argumentos %d \n\n", argc);
    printf("Argumentos de la línea de órdenes pasados a main:\n\n");
    for(i = 0; i < argc; i++)
        printf(" argv[%d]: %s\n\n", i, argv[i]);
    return 0;
}
