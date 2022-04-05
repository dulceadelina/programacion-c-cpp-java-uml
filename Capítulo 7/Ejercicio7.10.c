/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	15/02/2017 */

	#include <stdio.h>

	long int leer();
	long int factorial(long int n);

	int main ()
	{
	    long int num;
		puts("Ingrese numero: ");
		num = leer();
		printf("%ld", factorial (num));
		return 0;
	}

	long int leer()
	{
	    long int numero;
	    scanf("%ld", &numero);
	    return numero;
	}

	long int factorial(long int n)
	{
	    long int n;
	    if(n == 0 || n == 1)
            return 1;
        else
            return n* factorial (--n);
	}
