/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */
	
	#include <stdio.h>
	
	int main ()
	{
		int n = 1000, cuatro, cien, cuatrocientos;
		while(n < 1200)
		{
			cuatro = n % 4;
			cien = n % 100;
			cuatrocientos = n % 400;
			printf("hola");
			if(cuatro == 0 && cuatrocientos == 0)
			{
				printf("\n %d año bisiesto", n);
				n++;
			}
		}
	}
