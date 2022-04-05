/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */

	#include <stdio.h>
	/* constantes globales */
	const int num_lineas = 5;
	const char blanco = ' ';
	const char asterisco = '*';

	void main ()
	{
		int fila, blancos, cuenta_as;
		puts(" ");                      /* Deja una línea de separación */
                            /* ciclo externo: dibuja cada línea */
        for(fila = 1; fila <= num_lineas; fila++)
        {
            putchar('\t');          /* primer bucle interno: escribe espaciós */
            for(blancos = (num_lineas - fila); blancos > 0; blancos--)
            {
                putchar(blanco);
            }
            for(cuenta_as = 1; cuenta_as < 2 * fila; cuenta_as++)
            {
                putchar(asterisco);
                            /* terminar filas */
                puts(" ");
            }               /* fin del bucle externo */
        }
	}
