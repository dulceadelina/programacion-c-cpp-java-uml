/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	25/03/2017 */
#include <stdio.h>

int main()
{
    int filas, columnas, i, j;

    printf("Ingresa las filas: ");
    scanf("%d", &filas);
    printf("Ingresa las columnas: ");
    scanf("%d", &columnas);

    int arreglo[filas][columnas];
// Lectura de datos
    for(i = 0; i < filas; i++)
    {
        for(j = 0; j < columnas; j++)
        {
            printf("Ingresa el valor [%d][%d]", i, j );
            scanf("%d", &arreglo[i][j]);
        }
    }

    //Muestra el arreglo original
    for(i = 0; i < filas; i++)
    {
        printf("\n");
        printf("\n");
        for(j = 0; j < columnas; j++)
        {
            printf("%d", arreglo[i][j]);
        }
    }
// Muestra el arreglo traspuesto
    for(i = 0; i < columnas; i++)
    {
        printf("\n");
        printf("\n");
        for(j = 0; j < filas; j++)
        {
            printf("%d", arreglo[j][i]);
        }
    }
}
