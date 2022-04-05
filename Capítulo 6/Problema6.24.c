/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	Programa que calcula 1/2 - 2/2^2 - ... + n/2^n
	14/03/2017 */
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float suma = 0;

    printf("Ingresa n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
          suma = suma - (i/(pow(2, i)));
        else
            suma = suma + i/(pow(2, i));
    }

    printf("\n La suma es: %f", suma);
}
