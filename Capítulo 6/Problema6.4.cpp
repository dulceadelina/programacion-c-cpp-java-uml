/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */
	
	#include <stdio.h>
	
	int main ()
	{
		long int n = 1900, i, factorial = 1;
				
		for(i = 1; i <= 2000; i++)
		{
			factorial = factorial * i;
			printf("\n%d", factorial);
			n++;
		}
	}
