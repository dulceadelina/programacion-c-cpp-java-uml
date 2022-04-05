/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */

	#include <stdio.h>
	#define MAX 50

	int suma, num, i;

	int main ()
	{
		for(i = 1; i <= MAX; i++)
        {
            printf("\n %d + %d = ", suma, i);
            suma += i;
            printf("%d", suma);
        }

        printf("\nEl resultado de la suma de los primeros 50 números enteros: %d\n", suma);
        return 0;
	}
