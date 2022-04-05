/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	09.11.2016 */
	
	#include <stdio.h>
	
	int numero1, numero2, numero3;
	
	int main ()
	{
		puts("Ingresa los tres números");
		scanf("%d %d %d", &numero1, &numero2, &numero3);
		
		if (numero1 < numero2 && numero2 < numero3)
		{
			printf("Están en orden");
		}
		else
		{
			printf("No están en orden");
		}
		
		return 0;
	}
