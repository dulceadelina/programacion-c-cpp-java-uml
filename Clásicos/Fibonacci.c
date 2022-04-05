/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	04/02/2017 */

	#include <stdio.h>

	int main ()
	{
		unsigned int n, i, a = 1, b = 1, c;

		printf("0, 1, 1, ");

		for(i =1; i < 45; i++)
        {
            c = a + b;
            a = b;
            b = c;
            printf("%d, ", c);
        }
	}
