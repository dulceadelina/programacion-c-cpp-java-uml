/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */

	#include <stdio.h>

	int main ()
	{
		unsigned long int n, i, factorial = 1;

		puts("Ingresa n: ");
		scanf("%d", &n);

		for(i = 1; i <= n; i++)
		{
			factorial = factorial * i;
			printf("\n%d", factorial);
		}
	}
