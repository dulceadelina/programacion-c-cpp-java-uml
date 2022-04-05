/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	09.11.2016 */
	
	#include <stdio.h>
	
	#define PI 3.1416
	
	float radio, radiocuadrado, diametro, circunferencia, area;
	
	int main ()
	{
		puts("Introduce el radio ");
		scanf("%f", &radio);
		
		radiocuadrado = radio * radio;
		diametro = radio * 2;
		circunferencia = PI * diametro;
		area = PI * radiocuadrado;
		
		printf(" El área es %f", area);
		printf("\n La circunferencia es %f", circunferencia);
		return 0;
	}
	
	
	
