/*  Dulce Adelina Zu�iga Ramos
	4. Operadores y expresiones
	10.11.2016 */
	
	#include <stdio.h>
	
	int numero1, numero2, mayor; // mayor y pongo como par�metro el primer n�mero de entrada
	
	int main ()
	{
		puts("Ingresa dos n�meros... ");
		scanf("%d %d", &numero1, &numero2);
		
		(numero1 > numero2) ? mayor = 1 : mayor = 0;
		
		if( mayor == 1)
		{
			printf("N�mero %d es mayor", numero1);
		}
		else
		{
			printf("N�mero %d es mayor", numero2);
		}
	}
