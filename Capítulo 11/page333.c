/** Dulce 29/02/2020
    CAPÍTULO 11: Apuntadores (punteros) **/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double **mat;
    int n = 5, m = 5, i, j;
    mat = (double**) malloc(n*sizeof(double*));
    for(i = 0; i < n; i++)
    {
        mat[i] = (double*)malloc(m*sizeof(double));
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            mat[i][j] = i+1;
            printf("%lf\n", mat[i][j]);
        }
    }
    return 0;
}

