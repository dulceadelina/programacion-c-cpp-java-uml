/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	04/02/2017 */

	#include <stdio.h>

	int main ()
	{
	     int parejas, i = 0, a = 1, b = 1, c = 0;

		puts("Ingresa el número de parejas");
		scanf("%d", &parejas);

		while(c <= parejas)
        {
            c = a + b;
            a = b;
            b = c;
            i++;
        }
        printf("%d meses se requieren para tener %d parejas de conejos :P", i, parejas);
	}
