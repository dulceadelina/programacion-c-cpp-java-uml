/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	26/01/2017 */
	
	#include <stdio.h>
	#define MIN 11
	#define MAX 50
	int main ()
	{
		int suma, contador = MIN;
		while(contador <= MAX)
		{
			suma += contador;
			printf("%d + %d = %d\n", contador, suma-contador, suma);
			contador++;
		}
		
		printf("%d", suma);
		puts("\nBai");
	}
