/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	#include <stdio.h>
	
	int numero, positivo, igualacero;
	
	int main ()
	{
		puts("Introduce un número");
		scanf("%d", &numero);
		
		(numero == 0) ? igualacero = 1 : igualacero = 0;
		
		if(igualacero == 1)
		{
			puts("Igual a cero");
		}
		
		(numero > 0) ? positivo = 1 : positivo = 0;
		
		if(positivo == 1)
		{
			puts("Positivo");
		}
		
		if(positivo == 0)
		{
			puts("Negativo");
		}
		
		return 0;
	}
	
	
