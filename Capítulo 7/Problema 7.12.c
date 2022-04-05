/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	25/03/2017 */
#include <stdio.h>
#include <math.h>

float Serie(int n);
float Calcula(int n);

int main()
{
    int n, i = 1;
    printf("Ingresa n: ");
    scanf("%d", &n);
    printf("%d^2 ", i);
    for(i = 2; i <= n; i++)
    {
        printf("+ %d^2 ", i);
    }
    printf(" = %f", Serie(n));

    printf("\n\nCálculo de la serie mediante fórmula = %f", Calcula(n));
}

float Serie(int n)
{
    float suma = 0;
    int i;

    for(i = 1; i <= n; i++)
    {

        suma += pow(i, 2);
    }

    return suma;
}

float Calcula(int n)
{
    float resultado;

    resultado = (n*((n+10)*((2*n)+1)))/6;

    return resultado;
}
