/*  Dulce Adelina Zu�iga Ramos
	4. Operadores y expresiones
	07.11.2016 */
	
	#include <stdio.h>
	
	int numero, multiplicacion;
	
	int main ()
	{
		printf("Ingresa un n�mero entero: \n");
		scanf("%d", &numero);
		multiplicacion = numero * 2;
		printf("%d",  multiplicacion);
		printf("\nEl n�mero %d * 2 = %d", numero, multiplicacion);
		return 0;
	}
