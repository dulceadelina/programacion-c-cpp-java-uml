/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	25/03/2017 */
#include <stdio.h>

int main()
{
    int i, j, k;
    int Primero[21], Segundo[21], Tercero[6][12];

    puts("Hola");

    for(i = 0; i <12; i++)
    {
        scanf("%d", &Primero[i]);
    }
    for(j = 0; j < 6; j++)
    {
        Segundo[j] = Primero[2*j] + j;
    }
    for(k = 3; k <= 7; k++)
    {
        printf("%d %d", Primero[k+1], Segundo[k-1]);
    }
}
