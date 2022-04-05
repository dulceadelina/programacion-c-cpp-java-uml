/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	05/02/2019 */
#include <stdio.h>
long fibonacci(int n);
int main()
{
    int n, k;
    do{
        printf("Introduzca el número de términos: ");
        scanf("%d", &n);
    }while(n <= 1);

    puts("\tSerie de números Fibonacci");
    printf("0 1 ");

    for(k = 2; k <= n; k++)
    {
        printf("%ld%c", fibonacci(k), (k%7==0?'\n':' '));
    }
    return 0;
}

long fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 2) + fibonacci(n - 1);
}
