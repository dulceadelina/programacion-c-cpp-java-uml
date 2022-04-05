/*  Dulce Adelina Zuñiga Ramos
	5. Estructuras de selección: sentencias if y switch
	26.11.2016 */
	
	#include <stdio.h>
	
	int main()
	{
		int x;
		
		puts("Ingresa x: ");
		scanf("%d", &x);
		
		if (x < 0)
		{
			puts("Número netativo");
		}
		else if (x >= 0 && x <= 100)
		{
			puts("Está entre 0 y 100");
		}
		else if ( x > 100)
		{
			puts("Número mayor a 100");
		}
		return 0;
	}
