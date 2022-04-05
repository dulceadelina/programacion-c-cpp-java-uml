/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	08/02/2017 */

	#include <stdio.h>
	#include <ctype.h>

	int digito(char entrada);

	int main ()
	{
	    int caracter;
		puts("Ingresa un dígito: (0 al 9) ");
		scanf("%c", &caracter);

		printf("%d", digito(caracter));

		return 0;
	}

	int digito(char entrada)
	{
	    int logico;
	    logico = isdigit(entrada);
	    return logico;
	}
