/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	16/02/2017 */
/* Figura 5.7: fig05_07.c
   Escalamiento y cambio de enteros producidos por 1 + rand() % 6 */

    #include <stdlib.h>
	#include <stdio.h>

	int main ()
	{
		int i; /* contador */
		/* repite 20 veces */
		for ( i = 1; i <= 20; i++ )
		{
		    /* obtiene y despliega un número aleatorio entre 1 y 6 */
		    printf( "%10d", 1 + ( rand() % 6 ) );

            /* si el contador es divisible entre 5, comienza una nueva línea de salida */
            if ( i % 5 == 0 )
            {
                printf("\n");
            } /* fin de if */
        } /* fin de for */

		return 0;
	}
