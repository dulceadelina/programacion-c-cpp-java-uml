/*  Dulce Adelina Zu�iga Ramos
	5. Estructuras de selecci�n: sentencias if y switch
	26.11.2016 */
	
	#include <stdio.h>
	
	int main ()
	{
		int num1, num2, num3;
		
		puts("Ingresa tres n�meros");
		scanf("%d %d %d", &num1, &num2, &num3);
		
		if (num1 < num2)
		{
			if (num2 < num3)
			{
				puts("Est�n en orden num�rico");
			}
			else
			{
				puts("No est�n en orden, intenta de nuevo");
			}
		}
		return 0;
	}
