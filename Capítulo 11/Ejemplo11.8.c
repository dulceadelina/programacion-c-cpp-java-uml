/*  Dulce Adelina Zuñiga Ramos
	11. Apuntadores (punteros)
	19/08/2017 */
#include <stdio.h>
#include <stdlib.h>

float v[ ] = {34.5, -12.3. 4.5, 9.1, -2.5, 18.0, 5.5};
int compara_float(const void* a, const void *b);

int main()
{
    int j, n;
    int(*pf)(const void*, const void*);
    n = 8;
    printf("\n Número de elementos: %d\n, n");
    pf = compara_float;

    qsort((void*) v, n, sizeof(v[0], pf));

    for(j = 0; j < n; j++)
    {
        printf("%.2f ", v[j]);
    }
    puts("\n Pulsa cualquier tecla para continuar... ");
    j = getchar();
    return 0;
}

int compara_float(const void *a, const void *b)
{
    float *x, *y;
    x = (float*)a;
    y = (float*)b;
    return(*x - *y);
}
