/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	#include <stdio.h>
	#include <math.h>
	
	float a, b, c, a2, b2, c2;
	
	int main ()
	{
		puts("Ingresa los dos catetos: ");
		scanf("%f %f", &a, &b);
		
		a2 = a * a;
		b2 = b * b;
		c2 = a2 + b2;
		c = sqrt(c2);
		
		printf("h = %f", c);
		
		return 0;
	}
