/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	09.11.2016 */
	
	#include <stdio.h>
	
	float ancho, largo, superficie;
	
	int main ()
	{
		printf("Ingrese el valor de ancho en metros...");
		scanf("%f", &ancho);
		printf("Ingrese el valor de largo en metros...");
		scanf("%f", &largo);
		
		superficie = ancho * largo;
		
		printf("La superficie es de %.4f", superficie);
		return 0;
	}
	
