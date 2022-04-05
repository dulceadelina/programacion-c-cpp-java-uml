/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	
	#include <stdio.h>
	
	float a, b, c, d, e, f, x, y;
	
	int main ()
	{
		puts(" Ingrese a, b y c: ");
		scanf("%f %f %f", &a, &b, &c);
		puts(" Ingrese d, e y f");
		scanf("%f %f %f", &d, &e, &f);
		
		x = ((c * e) - (b * f)) / ((a * e) - (b * d));
		y = ((a * f) - (c *d)) / ((a * e) - (b * d));
		
		printf(" x = %f", x);
		printf(" y = %f", y);
	}
