/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	
	int main()
	{
		float suma = 0;
		float fraccion;
		int n = 2;
	
		while(n<=50)
		{
			fraccion = 1/n;
			suma = suma + fraccion;
			printf("\n%d", suma);
			n++;
		}
		
		printf("\nTotal %d", suma);
	}
	
	
