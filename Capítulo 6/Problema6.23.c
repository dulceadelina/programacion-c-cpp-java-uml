/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */

	#include <stdio.h>

	int main ()
	{
		int i, n;
		float num, suma, media;

		printf("Introduce la cantidad de números: ");
		scanf("%d", &n);

		for(i = 0; i < n; i++)
		{
            printf("Introduce el número: ");
            scanf("%f", &num);
            suma += num;
		}
        media = suma / n;
        printf("La suma de los números es %f", suma);
		printf("\nEl promedio es %f", media);
	}
