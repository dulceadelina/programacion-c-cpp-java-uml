/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	26/03/2017 */
#include <stdio.h>

int main()
{
    int m, n, i, j;
    printf("Ingresa m: ");
    scanf("%d", &m);
    printf("Ingresa n: ");
    scanf("%d", &n);

    int arreglo[m][n];
    // Lectura de arreglo
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Ingresa valor [%d][%d]", i+1, j+1);
            scanf("%d", &arreglo[i][j]);
        }
    }
    printf("\n\n");
    //Impresión para verlo
    for(i = 0; i < m; i++)
    {
        printf("\n");
        for(j = 0; j < n; j++)
        {
            printf(" %d ", arreglo[i][j]);
        }
    }

    int aux[m][n];
    printf("\n\n");
    //Conversión del arreglo
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            aux[i][j] = arreglo[j][i];
        }
    }
    printf("\n\n");
    // Imprimir resultado final
    for(i = 0; i < m; i++)
    {
        printf("\n");
        for(j = 0; j < n; j++)
        {
            printf(" %d ", aux[i][j]);
        }// Imprimo arreglo auxiliar porque no tiene caso volver a reasignar a arreglo, a menos que fuera necesario
    }
}
