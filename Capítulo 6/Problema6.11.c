/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	04/02/2017 */

	#include <stdio.h>

	int main ()
	{
        int n, i, divisores = 0;

		puts("Ingresa un número: ");
		scanf("%d", &n);

		for(i = 1; i <= n; i++)
        {
            if((n % i) == 0)
            {
                divisores++;
            }
        }

        // printf("%d", divisores);

        if(divisores == 2)
        {
            printf("%d es primo", n);
        }
        else
        {
            printf("%d no es primo", n);
        }

		return 0;
	}
