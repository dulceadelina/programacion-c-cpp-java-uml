/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	08/02/2017 */

	#include <stdio.h>

    char positivo (int num);

	int main ()
	{
	    int numero;
		puts("Introduce un número: ");
		scanf("%d", &numero);
		printf("%c", positivo(numero));
	}           // importante el formato de salida

	char positivo(int num)
	{
	    char nop;
	    if(num > 0)
        {
            nop = 'P';
        }
        else
        {
            nop = 'N';
        }
        return nop;
	}
