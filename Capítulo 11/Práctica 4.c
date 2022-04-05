/** Dulce Zuñiga
    08/10/2019 **/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int* enteros[5];
    int i;
    for(i = 0; i < n; i++)
    {
        enteros[i] = &n;
        printf("%d\n", &enteros[i]);
    }

    char *meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio",
                        "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int r;
    for(r = 0; r < 12; r++)
    {
        printf("%s\n", meses[r]);
    }
    return 0;
}
