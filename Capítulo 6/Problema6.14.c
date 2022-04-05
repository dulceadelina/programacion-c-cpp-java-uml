/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	04/02/2017 */

	// Muestra todos los números perfectos hasta un número dado por el usuario

	#include <stdio.h>

	int main ()
	{
		int n, resto, i, divisores = 0;

		puts("Ingresa n: ");
		scanf("%d", &n);

		for(i = 1; i < n; i++)
        {
            if((n % i) == 0)
            {
                divisores += i;
            }
            if(divisores == n)
            {
                printf("%d", i);
            }
        }


	}
