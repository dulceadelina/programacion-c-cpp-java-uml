/*  Dulce Adelina Zu�iga Ramos
	5. Estructuras de selecci�n: sentencias if y switch
	26.11.2016 
	31: 1, 3, 5, 7, 8, 10, 12;
	30: 4, 6, 9, 11;
	28: 2;
	*/
	
	#include <stdio.h>
	
	int main()
	{
		int mes;
		puts("Ingresa un n�mero de mes del 1 al 12");
		scanf("%d", &mes);
		
		if(mes < 1 || mes >12)
		{
			puts("Ese no es un mes");
		}
			else if (mes == 2)
			{
				puts("Febrero tiene 28 d�as");
			}
			else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
			{
				puts("30 d�as");
			}
			else
			{
				puts("31 d�as");
			}
		return 0;
	}
