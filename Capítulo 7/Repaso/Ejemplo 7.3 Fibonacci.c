/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	01/02/2019 */
#include <stdio.h>
long int fibonacci(void);
int main()
{
    int n, i;
    printf("\nCuantos números de Fibonacci?: ");
    scanf("%d", &n);
    printf("\nSecuencia de Fibonacci: 0, 1");
    for(i = 2; i < n; i++)
    {
        printf(", %ld", fibonacci());
    }
    return 0;
}
long int fibonacci(void)
{
    static int x = 0;
    static int y = 1;
    y = y + x;
    x = y - x;
    return y;
}
