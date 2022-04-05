/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	09.11.2016 */
	
	#include <stdio.h>
	
	int x, y, division, modulo;
	
	int main ()
	{
		puts("Ingresa el valor de x: ");
		scanf("%d", &x);
		puts("Ingresa el valor de y: ");
		scanf("%d", &y);
		
		division = x/y;
		modulo = x%y;
		
		printf("\n1. %d", division);
		printf("\n2. %d", modulo);
		return 0;
	}
