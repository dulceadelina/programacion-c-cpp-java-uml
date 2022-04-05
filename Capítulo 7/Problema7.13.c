/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	25/03/2017 */
#include <stdio.h>
#include <math.h>

long int Progresion(int a, int b);

int main()
{
    int x, n, i;

    printf("Ingresa x: ");
    scanf("%d", &x);
    printf("Ingresa n: ");
    scanf("%d", &n);

    printf("Progresión geométrica \n");
    printf("1 ");
    for(i = 1; i <= n; i++)
    {
        printf("+ %d^%d ", x, i);
    }

    printf(" = %d", Progresion(x, n));
}

long int Progresion(int a, int b)
{
    long int suma = 0;
    int i;

    for(i = 1; i <= b; i++)
    {
        suma += pow(a, i);
    }

    suma += 1;

    return suma;
}
