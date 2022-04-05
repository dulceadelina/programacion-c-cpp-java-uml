/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	12.11.2016 */
	
	#include <stdio.h>
	#include <stdlib.h>
	
	int cifra1, cifra2, producto, cociente, resto;
	
	int main()
	{
		puts("Ingresa dos cantidades de tres dígitos: ");
		scanf("%d %d", &cifra1, &cifra2);
		
		if( cifra1 > 999 || cifra2 > 999)
		{
			puts("No es de tres dígitos ¬¬");
		}
		
		else
		{
			producto = cifra1 * cifra2;
			cociente = cifra1 / cifra2;
			resto = cifra1 % cifra2;
			
			printf("\n\t\t\t\t\t\t %d", cifra1);
			printf("\n\t\t\t\t\t\t %d", cifra2);
			printf("\n\t\t\t\t\t\t Producto: %d", producto);
			printf("\n\t\t\t\t\t\t Cpciente: %d", cociente);
			printf("\n\t\t\t\t\t\t Resto: %d", resto);
		}
	}
