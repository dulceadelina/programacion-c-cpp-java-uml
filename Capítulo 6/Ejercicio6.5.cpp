/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	
	int main ()
	{
		int i, n;
		
		puts("Ingresa n: ");
		scanf("%d", &n);
		
		for( i = 0; i < n; ++i)
		{
			--n;
		}
		printf("%d \n", i);
		
		puts("Bai");
	}
