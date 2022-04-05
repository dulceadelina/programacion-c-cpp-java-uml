/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	10.11.2016 */
	
	#include <stdio.h>
	
	int numero1, numero2, mayor; // mayor y pongo como parámetro el primer número de entrada
	
	int main ()
	{
		puts("Ingresa dos números... ");
		scanf("%d %d", &numero1, &numero2);
		
		(numero1 > numero2) ? mayor = 1 : mayor = 0;
		
		if( mayor == 1)
		{
			printf("Número %d es mayor", numero1);
		}
		else
		{
			printf("Número %d es mayor", numero2);
		}
	}
