/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	25/03/2017 */
#include <stdio.h>

int main()
{
    int i, j, k;
    int Primero[21], Segundo[21], Tercero[6][12];

    puts("Hola");

    scanf("%d", &k);

    for(i = 3; i <= k;)
    {
        scanf("%d", &Segundo[i++]);
    }
    j = 4;
    printf("%d %d\n", Segundo[k], Segundo[j+1]);
}
