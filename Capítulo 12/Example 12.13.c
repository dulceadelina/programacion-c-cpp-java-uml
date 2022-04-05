/** Dulce 04/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos **/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fd;
    double x, s = 0.0;
    if((fd = fopen("\\reales.num", "rb")) == NULL)
        exit(-1);
    while(!feof(fd))
    {
        fread(&x, sizeof(double), 1, fd);
        s += x;
    }
    return 0;
}
