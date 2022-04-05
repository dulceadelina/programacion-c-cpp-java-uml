/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	
	int main ()
	{
		float calificacion;
		puts("Ingrese las calificaciones de historia: ");
		scanf("%f", &calificacion);
		while(calificacion >= 0 && calificacion <= 10)
		{
			puts("Ingrese la siguiente calificación");
			scanf("%f", &calificacion);			
		}
		puts("Bai");
	}
