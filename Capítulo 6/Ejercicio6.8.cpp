/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	#include <math.h>
	
	int main ()
	{
		int n, max_limite, potencia, i;
		
		puts("Ingresa n: ");
		scanf("%d", &n);
		puts("Ingresa el límite máximo de potencia: ");
		scanf("%d", &max_limite);
		
		for(i = 1; i <= max_limite; i++)
		{
			potencia = pow(n, i);
			printf("\nLa potencia de %d a la %d = %d", n, i, potencia);
		}			
	}
