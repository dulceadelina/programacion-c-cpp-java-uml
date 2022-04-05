/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */

	#include <stdio.h>

	para(long int num);
	mientras(long int num);
	hazmientras(long int num);

	long int n;

	int main ()
	{
		printf("Ingresa n: ");
		scanf("%d", &n);

		printf("\n Factorial con for %d", para(n));
		printf("\n Factorial con mientras %d", mientras(n));
		printf("\n Factorial con hazmientras %d", hazmientras(n));
	}

	para(long int num)
	{
	    int i;
	    long int factorial = 1;

	    for(i = 1; i <= n; i++)
		{
			factorial = factorial * i;
		}
		return factorial;
	}

	mientras(long int num)
	{
	    int i = 1;
	    long int factorial = 1;

	    while(i <= n)
        {
            factorial = factorial * i;
            i++;
        }
        return factorial;
	}

	hazmientras(long int num)
	{
	    long int factorial = 1;
	    int i = 1;
	    do
        {
            factorial = factorial * i;
            i++;
        }while(i <= n);
        return factorial;
	}
