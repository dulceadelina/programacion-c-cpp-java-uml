/*  Dulce Adelina Zu�iga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */

	#include <stdio.h>
	#include <ctype.h>

    i, n, positivos, negativos, cero;
    float num;

	int main ()
	{
		printf("Ingresa la cantidad de n�meros: ");
		scanf("%d", &n);

		for(i = 0; i < n; i++)
		{
            printf("\nIngresa el n�mero");
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

		printf("\nN�meros positivos introducidos  %d", positivos);
		printf("\nN�meros negativos introducidos  %d", negativos);
		printf("\nCantidad de ceros introducidos  %d", cero);

		return 0;
	}
