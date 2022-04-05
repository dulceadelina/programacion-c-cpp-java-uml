/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	15/02/2017 */

	#include <stdio.h>

	int leer();

	int main ()
	{
	    int n;
		puts("Ingresa n");
		n = leer();
		return 0;
	}

	int leer()
	{
	    int numero;
	    scanf("%i", &numero);
	    return numero;
	}
