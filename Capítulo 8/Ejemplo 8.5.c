/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	08/02/2019 */
#include <stdio.h>

void main()
{
    float discos[2][4];
    int fila, col;
    for(fila = 0; fila < 2; fila++)
    {
        for(col = 0; col < 4; col++)
        {
            scanf("%f", &discos[fila][col]);
        }
    }
    for(fila = 0; fila < 2; fila++)
    {
        for(col = 0; col < 4; col++)
        {
            printf("\nPrecio euros: %.1f\n", discos[fila][col]);
        }
    }
}
