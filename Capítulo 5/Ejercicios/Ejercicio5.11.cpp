/*  Dulce Adelina Zu�iga Ramos
	5. Estructuras de selecci�n: sentencias if y switch
	26.11.2016 */
	
	#include <stdio.h>
	
	int main()
	{
		int x;
		
		puts("Ingresa x: ");
		scanf("%d", &x);
		
		if (x < 0)
		{
			puts("N�mero netativo");
		}
		else if (x >= 0 && x <= 100)
		{
			puts("Est� entre 0 y 100");
		}
		else if ( x > 100)
		{
			puts("N�mero mayor a 100");
		}
		return 0;
	}
