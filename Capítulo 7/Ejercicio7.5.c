/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	08/02/2017 */

	#include <stdio.h>
	#include <ctype.h>

	int vocal(char entrada);

	int main ()
	{
	    int caracter;
		puts("Ingresa una vocal: ");
		scanf("%c", &caracter);

		printf("%d", vocal(caracter));

		return 0;
	}

	int vocal(char entrada)
	{
	    int logico;
	    entrada = toupper(entrada);

	    switch(entrada)
	    {
	        case 'A':
	            logico = 1;
                break;
            case 'E':
                logico = 1;
                break;
            case 'I':
                logico = 1;
                break;
            case 'O':
                logico = 1;
                break;
            case 'U':
                logico = 1;
                break;
            default:
                logico = 0;
                break;
	    }
	    return logico;
	}
