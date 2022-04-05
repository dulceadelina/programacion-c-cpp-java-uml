/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	04/02/2017 */

	#include <stdio.h>

	int main ()
	{
	    int n, i;
	    float f, suma;

	    puts("Ingresa n: ");
	    scanf("%d", &n);

	    for(i = 1; i <= n; i++)
        {
            f = i / i;
            suma =  suma + f;
        }

        printf("Suma = %f", suma);
		return 0;
	}
