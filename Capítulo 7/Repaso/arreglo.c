/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	06/02/2019 */
#include <stdio.h>

int main()
{
    int n;
    printf("Ingresa n");
    scanf("%d", &n);

    int numeros[n];
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d ", &numeros[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", numeros[i]);
    }
}
