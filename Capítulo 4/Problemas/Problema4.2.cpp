/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	
	#include <stdio.h>
	
	float celsius, fahrenheit;
	
	int main ()
	{
		puts("Ingresa grados Celsius: ");
		scanf("%f", &celsius);
		
		fahrenheit = 1.8 * celsius + 32;
		
		printf("°F: %4.2f", fahrenheit);
		return 0;
	}
