/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	10.11.2016 */
	
	#include <stdio.h>
	
	int year, A, B, C, D, E, N, diamarzo, diabril;
	
	int main ()
	{
		printf("Ingrese el año del que se desee calcular: ");
		scanf("%d", &year);
		
		A = year % 19;
		B = year % 4;
		C = year % 7;
		D = (19 *A + 24) % 30;
		E = (2 * B + 4 * C + 6 * D + 5) % 7;
		N = (22 + D + E);
		diabril = N - 31;
		
		if (N <= 31)
		{
			printf("El día %d marzo es el domingo de Pascua", N);
		}
		
		if (N > 31)
		{
			printf("El día %d abril es el domingo de Pascua", diabril);
		}
		
		return 0;
	}
