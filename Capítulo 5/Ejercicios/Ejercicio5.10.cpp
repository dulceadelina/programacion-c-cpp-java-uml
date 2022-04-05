/*  Dulce Adelina Zuñiga Ramos
	5. Estructuras de selección: sentencias if y switch
	26.11.2016 */
	
	#include <stdio.h>
	
	int main ()
	{
		int num1, num2, num3;
		
		puts("Ingresa tres números");
		scanf("%d %d %d", &num1, &num2, &num3);
		
		if (num1 < num2)
		{
			if (num2 < num3)
			{
				puts("Están en orden numérico");
			}
			else
			{
				puts("No están en orden, intenta de nuevo");
			}
		}
		return 0;
	}
