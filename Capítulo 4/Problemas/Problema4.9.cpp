/*  Dulce Adelina Zu�iga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	
	#include <stdio.h>
	#include <math.h>
	
	float a, b, c, p, semiarea, area;
	
	int main ()
	{
		puts("Ingrese los tres lados del tri�ngulo");
		scanf("%f %f %f", &a, &b, &c);
		
		p = (a + b + c) / 2;
		semiarea = (p * ((p - a) * (p - b) * (p - c)));
		area = sqrt(semiarea);
		
		printf("�rea = %f u^2", area);
	}
