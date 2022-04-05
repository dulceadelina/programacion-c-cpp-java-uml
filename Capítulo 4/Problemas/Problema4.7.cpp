/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	
	#include <stdio.h>
	
	float pies, yardas, pulgadas, centimetros, metros;
	
	int main ()
	{
		puts("Introduce un valor en pies: ");
		scanf("%f", &pies);
		
		yardas = pies * 3;
		pulgadas = pies * 12;
		centimetros = pulgadas * 2.54;
		metros = centimetros / 100;
		
		printf("\nYardas = %f", yardas);
		printf("\nPulgadas = %f", pulgadas);
		printf("\nCentímetros = %f", centimetros);
		printf("\nMetros = %f", metros);
	}
