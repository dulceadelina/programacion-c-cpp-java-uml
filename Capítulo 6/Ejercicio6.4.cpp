/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	
	int main ()
	{
		int n, i = 1;
		puts("Ingresa n: ");
		scanf("%d", &n);
		
		while ( i <= n) 
		{
			if((i % n) == 0)
			{
				++i;
			}
			else
			{
				i++;
			}
		}
		printf("%d \n", i);
		puts("Bai");
	}
