/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */

	#include <stdio.h>
	#include <ctype.h>

    i, n, positivos, negativos, cero;
    float num;

	int main ()
	{
		printf("Ingresa la cantidad de números: ");
		scanf("%d", &n);

		for(i = 0; i < n; i++)
		{
            printf("\nIngresa el número");
            scanf("%f", &num);

            if(num > 0)
            {
                positivos++;
            }
            else if(num < 0)
            {
                negativos++;
            }
            else
            {
                cero++;
            }
		}

		printf("\nNúmeros positivos introducidos  %d", positivos);
		printf("\nNúmeros negativos introducidos  %d", negativos);
		printf("\nCantidad de ceros introducidos  %d", cero);

		return 0;
	}
