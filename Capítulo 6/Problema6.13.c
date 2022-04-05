/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	04/02/2017 */

	#include <stdio.h>
	#include <math.h>

	int main ()
	{
	    int n, i;
	    float f, suma;

	    puts("Ingresa n: ");
	    scanf("%d", &n);

	    for(i = 1; i <= n; i++)
        {
            f = i / (pow(2, i));
            suma =  suma + f;
        }

        printf("Suma = %f", suma);
		return 0;
	}
