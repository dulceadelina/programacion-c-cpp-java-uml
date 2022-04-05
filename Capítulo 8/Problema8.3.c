/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	28/03/2017 */
#include <stdio.h>

void Invierte(int n);

int main()
{
    int cantidad;
    printf("Ingresa el número de datos: ");
    scanf("%d", &cantidad);

    Invierte(cantidad);
}

void Invierte(int n)
{
    int ordenado[n], invertido[n];
    int i, j;

    for(i = 0; i < n; i++)
    {
        printf("Ingresa el valor no. %d: ", i+1);
        scanf("%d", &ordenado[i]);
    }

    printf("\n\n");
    for(i = 0; i < n; i++)
    {
        printf(" %d ", ordenado[i]);
    }

    printf("\n\n");
    j = n-1;
    for(i = 0; i < n; i++)
    {
        invertido[j] = ordenado[i];
        j--;
    }

    for(i = 0; i < n; i++)
    {
        printf(" %d ", invertido[i]);
    }
}
