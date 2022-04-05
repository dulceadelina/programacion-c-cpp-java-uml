/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	06/02/2019 */
#include <stdio.h>
#define NUM 8
int main()
{
    int nums[NUM];
    int i;
    int total = 0;
    for(i = 0; i < NUM; i++)
    {
        printf("Por favor, introduzca el número: ");
        scanf("%d", &nums[i]);
    }
    printf("\nLista de números: ");
    for(i = 0; i < NUM; i++)
    {
        printf("%d", nums[i]);
        total+= nums[i];
    }
    printf("La suma de los números es %d", total);
}
