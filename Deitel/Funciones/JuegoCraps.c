/*  Dulce Adelina Zu�iga Ramos
	16/02/2017 */
	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h> /* contiene el prototipo de la funci�n time */

	/* constantes de enumeraci�n que representan el estado del juego */
	enum Estatus { CONTINUA, GANA, PIERDE };

	int tiraDados( void ); /* prototipo de la funci�n */

	int main()
	{
	    int suma; /* suma del tiro de datos */
	    int miPunto; /* punto ganado */

	    enum Estatus estatusJuego; /* puede contener CONTINUA, GANA o PIERDE */

	    /* randomiza el generador de n�meros aleatorios mediante la funci�n time */
	    srand( time( NULL ) );

	    suma = tiraDados(); /* primer tiro de los dados */

	    /* determina el estado del juego basado en la suma de los dados */
	    switch( suma )
	    {
	        /* gana en el primer tiro */
            case 7:
            case 11:
                estatusJuego = GANA;
	        break;

	        /* pierde en el primer tiro */
	        case 2:
            case 3:
            case 12:
                estatusJuego = PIERDE;
                break;

            /* recuerda el punto */
            default:
                estatusJuego = CONTINUA;
                miPunto = suma;
                printf( "Su punto es %d\n", miPunto );
                break; /* opcional */
	    }/* fin de switch */

	    /* mientras el juego no se complete */
	    while ( estatusJuego == CONTINUA )
        {
            suma = tiraDados(); /* tira de nuevo los dados */

            /* determina el estatus del juego */
            if ( suma == miPunto )  /* gana por punto */
            {
                estatusJuego = GANA; /* fin del juego, el jugador gana */
            } /* fin de if */
            else
            {
                if ( suma == 7 )  /* pierde al tirar 7 */
                {
                    estatusJuego = PIERDE; /* termina el juego, el jugador pierde */
                } /* fin de if */
            } /* fin de else */
        } /* fin de while */

	    /* despliega mensaje de triunfo o derrota */
	    if ( estatusJuego == GANA )  /* �Gan� el jugador? */
        {
            printf( "El jugador gana \n" );
        } /* fin de if */
        else  /* el jugador pierde */
        {
            printf( "El jugador pierde\n" );
        } /* fin de else */

        return 0;
	} /* fin de main */

	/* tiro de dados, calcula la suma y despliega los resultados */
	int tiraDados( void )
	{
	    int dado1; /* primer dado */
	    int dado2; /* segundo dado */
	    int sumaTemp; /* suma de los dados */

	    dado1 = 1 + ( rand() % 6 ); /* toma el aleatorio para el dado1 */
	    dado2 = 1 + ( rand() % 6 ); /* toma el aleatorio para el dado2 */
	    sumaTemp = dado1 + dado2; /* suma el dado1 y el dado2 */

	    /* despliega los resultados de este tiro */
	    printf( "El jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp );

	    return sumaTemp; /* devuelve la suma de los dados */
	} /* fin de la funci�n tiraDados */
