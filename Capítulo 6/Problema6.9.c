/*  Dulce Adelina Zu�iga Ramos
	6. Estructuras de control: bucles
	04/02/2017 */

	#include <stdio.h>

	int main ()
	{
	     int parejas, i = 0, a = 1, b = 1, c = 0;

		puts("Ingresa el n�mero de parejas");
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
