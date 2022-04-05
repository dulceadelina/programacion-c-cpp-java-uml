/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	25/03/2017 */
#include <stdio.h>

int main()
{
    int i, j, k;
    int Primero[21], Segundo[21], Tercero[6][12];

    puts("Hola");

    for(i = 0; i <10; i++)
    {
        Primero[i] = i + 3;
    }

    scanf("%d %d", &j, &k);
    for(i = j; i <= k;)
    {
        printf("%d\n", Primero[i++]);
    }
}
