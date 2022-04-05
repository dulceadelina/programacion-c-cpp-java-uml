/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	25/03/2017 */
#include <stdio.h>

int main()
{
    int i, j, k;
    int Primero[21], Segundo[21], Tercero[6][12];

    puts("Hola");

    for(i = 1; i <= 6; i++)
    {
        scanf("%d", &Primero[i]);
    }

    for(i = 3; i >0 ; i--)
    {
        printf("%4d", Primero[2*i]);
    }
}
