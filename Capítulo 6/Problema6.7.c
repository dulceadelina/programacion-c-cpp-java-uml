/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	04/02/2017 */

	#include <stdio.h>

	int main ()
	{
		// int n;
		long int i = 1, j = 2;
		int pares = 3, impares = 3,  divisores = 0;

		while(pares > 0 && impares > 0)
        {
            while(i < j)
            {
                if((j % i) == 0)
                {
                    divisores += i;
                }
                i++;
            }

            if(divisores == j)
            {
                if((j % 2) == 0)
                {
                    pares--;
                    printf("Perfecto par %d", j);
                }
                else if((j % 2) == 1)
                {
                    impares--;
                    printf("Perfecto impar %d", j);
                }
            }
            j++;
        }
	}
