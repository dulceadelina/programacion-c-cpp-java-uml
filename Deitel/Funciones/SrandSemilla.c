/* Figura 5.9: fig05_09.c
   Randomizaci�n del programa de dados */

#include <stdlib.h>
#include <stdio.h>

/* la funci�n main comienza la ejecuci�n del programa */
int main()
{
    int i; /* contador */
    unsigned semilla; /* n�mero que se utiliza para establecer la semilla
                        del generador de n�meros aleatorios */
    printf( "Introduzca la semilla: " );
    scanf( "%u", &semilla ); /* observe el %u para un unsigned */

    srand( semilla ); /* establece la semilla del generador de n�meros aleatorios */

    /* repite 10 veces */
    for ( i = 1; i <= 10; i++ )
    {
        /* obtiene y despliega un n�mero aleatorio entre 1 y 6 */
        printf( "%10d", 1 + ( rand() % 6 ) );

    /* si contador es divisible entre 5, comienza una nueva l�nea de salida */
        if ( i % 5 == 0 )
        {
            printf( "\n" );
        }/* fin de if */
    }/* fin de for */

    return 0; /* indica terminaci�n exitosa */
}/* fin de main */
