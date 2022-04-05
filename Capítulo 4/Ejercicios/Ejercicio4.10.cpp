/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	09.11.2016 */
	
	#include <stdio.h>
	
	int entrada, minutos, segundos; // entrada es igual a los segundos que ingresa el usuario, minutos al hacer la conversión y segundos que restan.
	
	int main ()
	{
		puts("Ingresa los segundos: ");
		scanf("%d", &entrada);
		
		minutos = entrada / 60;
		segundos = entrada % 60;
		
		printf("Minutos y segundos %d : %d", minutos, segundos);
		return 0;
	}
