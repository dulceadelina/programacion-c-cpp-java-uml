/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	25/03/2017 */
#include <stdio.h>

int main()
{
    int filas, columnas, i, j, suma = 0;

    printf("Ingresa las filas y columnas: ");
    scanf("%d %d", &filas, &columnas);

    int arreglo[filas][columnas];
// Lectura de datos
    for(i = 0; i < filas; i++)
    {
        for(j = 0; j < columnas; j++)
        {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &arreglo[i][j]);
        }
    }
    printf("\n\n");
    for(i = 0; i < filas; i++)
    {
        printf("\n");
        for(j = 0; j < columnas; j++)
        {
            printf(" %d ", arreglo[i][j]);
        }
    }
    printf("\n\n");

    for(i = 0; i < filas; i++)
    {
        for(j = 0; j < columnas; j++)
        {
            if(i != j)
                suma += arreglo[i][j];
        }
    }


    printf("\n\n Suma = %d", suma);
}
