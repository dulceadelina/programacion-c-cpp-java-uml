/*  Dulce Adelina Zu�iga Ramos
	4. Operadores y expresiones
	10.11.2016 */
	
	#include <stdio.h>
	
	int mes, par;
	
	int main ()
	{
		puts("Introduce un n�mero del 1 al 12... ");
		scanf("%d", &mes);
		
		if( mes == 1 ||  mes == 3 ||  mes == 5 || mes == 7 ||  mes == 8 || mes == 10 ||  mes == 12)
		{
			puts("31 d�as");
		}
		
		if( mes == 4 || mes == 6 || mes == 9 ||  mes == 11)
		{
			puts("30 d�as");
		}
		
		if( mes == 2)
		{
			puts("28 d�as");
		}
		return 0;
	}
