/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	07.11.2016 */
	
	#include <stdio.h>
	
	int numero, multiplicacion;
	
	int main ()
	{
		printf("Ingresa un número entero: \n");
		scanf("%d", &numero);
		multiplicacion = numero * 2;
		printf("%d",  multiplicacion);
		printf("\nEl número %d * 2 = %d", numero, multiplicacion);
		return 0;
	}
