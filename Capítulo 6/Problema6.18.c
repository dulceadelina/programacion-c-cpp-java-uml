/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */

	#include <stdio.h>

	int num, mayor;

	int main ()
	{
	    printf("Ingresa el primer número: ");
	    scanf("%d", &num);
	    mayor = num;
        puts("Para salir introduce un negativo");
	    while(num > 0)
        {
            printf("Ingresa el siguiente número: ");
            scanf("%d", &num);
            if(num > mayor)
            {
                mayor = num;
            }
        }

	    printf("\n El mayor fue %d ", mayor);
		return 0;
	}
