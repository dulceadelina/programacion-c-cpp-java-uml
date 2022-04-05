/*  Dulce Adelina Zuñiga Ramos
	4. Operadores y expresiones
	09.11.2016 
	2
	-4
	-5
	-30
	-1*/
	
	#include <stdio.h>
	
	const int M = 6;
	
	int main ()
	{
		int a, b, c;
		puts("Introduce el valor de a y de b");
		scanf("%d %d", &a, &b);
		c = 2 * a -b;
		c -= M;
		b = a + c - M;
		a = b * M;
		
		printf("\na = %d\n", a);
		b = -1;
		printf("6d %6d", b, c);
		return 0;
	}
	
