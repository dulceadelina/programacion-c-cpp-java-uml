/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	11/02/2019 */
#include <stdio.h>

int SumaDeEnteros(const int ArrayEnteros[], int NoElementos);
int maximo(const int ArrayEnteros[], int NoElementos);

int main()
{
    int Items[10];
    int Total, i;
    puts("Introduzca 10 números, seguidos por return ");
    for(i = 0; i < 10; i++)
        scanf("%d", &Items[i]);
    printf("Total = %d \n", SumaDeEnteros(Items, 10));
    printf("Valor máximo: %d \n", maximo(Items, 10));
    return 0;
}
int SumaDeEnteros(const int ArrayEnteros[], int NoElementos)
{
    int i, Total = 0;
    for(i = 0; i < NoElementos; i++)
        Total += ArrayEnteros[i];
    return Total;
}
int maximo(const int ArrayEnteros[], int NoElementos)
{
    int mx;
    int i;
    mx = ArrayEnteros[0];
    for(i = 1; i < NoElementos; i++)
        mx = (ArrayEnteros[i] > mx ? ArrayEnteros[i] : mx);
    return mx;
}
