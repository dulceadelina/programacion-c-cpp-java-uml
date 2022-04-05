/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	10.11.2016 */
	
	#include <stdio.h>
	
	int x, menorquecero, mayorquecien, intervalo;
	
	int main ()
	{
		puts("Ingresa el valor de X: ");
		scanf("%d", &x);
		
		menorquecero = (x < 0);
		mayorquecien = (x > 100);
		intervalo = (x >= 0 && x <= 100);
		
		printf("\n%d, %d, %d", menorquecero, mayorquecien, intervalo);
		return 0;
	}
	
