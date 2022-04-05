/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	
	int main ()
	{
		int n, m;
				
		for( n = 1; n <= 10; n++)
		{
			for(m = 1; m <= 10; m++)
			{
				printf("%d veces %d = %d \n", n, m, n*m);
			}
		}
		
		puts("Bai");
	}
