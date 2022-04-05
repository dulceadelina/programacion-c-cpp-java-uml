/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	08/02/2017 */

	#include <stdio.h>
	#include <math.h>

	float redondeo(float a, int b);

	int main ()
	{
	    float cantidad;
	    int decimales;

		puts("Ingresa la cantidad: ");
		scanf("%f", &cantidad);
		puts("Ingresa los decimales que quieres: ");
		scanf("%d", &decimales);

		printf("Convertido %f", redondeo(cantidad, decimales));
		return 0;
	}

	float redondeo(float a, int b)
	{
	    double y, decimal;
	    float suma;

	    decimal = modf(a, &y);
	    suma = y + decimal;
	    return suma;
	}
