/*  Dulce Adelina Zu�iga Ramos
	6. Estructuras de control: bucles
	04/02/2017 */

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
        }

		if(divisores == n)
        {
            printf("%d es un n�mero perfecto", n);
        }
        else
        {
            printf("%d no es perfecto ;(", n);
        }
	}
