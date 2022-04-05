/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	15/02/2017 */

	#include <stdio.h>

	long fibonacci(int n);

	int main ()
	{
	    int n, k;
        {
            printf("Introduzca el número de términos: ");
            scanf("%d", &n);
        }while(n <= 1);

        puts("\t Serie números fibonacci");
        printf("0  1  ");

        for(k = 2; k <= n; k++)
        {
            printf("%ld %c", fibonacci(k), (k%7 == 0 ? '\n' : ' '));
        }
        return 0;
	}

        long fibonacci(int n)
        {
            if(n == 0 || n == 1)
                return n;
            else
                return fibonacci(n - 2) + fibonacci(n - 1);
        }
