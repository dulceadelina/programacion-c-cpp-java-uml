/*  Dulce Adelina Zu�iga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	#include <stdio.h>
	
	int year, bisiesto;
	
	int main()
	{
		puts("Introduce el a�o: ");
		scanf("%d", &year);
		
		if((year % 4) == 0 && ((year % 100) == 0 && (year % 400) == 0))
		{
			puts("Bisiesto");
		}
		return 0;
	}
