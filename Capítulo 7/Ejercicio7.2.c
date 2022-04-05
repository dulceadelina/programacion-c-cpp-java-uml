/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	08/02/2017 */

	#include <stdio.h>

	int divisible(int a, int b); // variables que vas a utilizar en tu funcion desde la llamadora

	int main ()
	{
	    int num1, num2;
		puts("Ingresa el primer número");
		scanf("%d", &num1);
		puts("Ingresa el segundo número");
		scanf("%d", &num2);
		printf("true = 1 \t false = 0 \nes %d", divisible(num1, num2));
	}                                           // llamar a la funcion, no agregar tipo, solo nombre de variables

	int divisible(int a, int b)
	{
	    int logico, division1, division2;

	    division1 = a%b;
	    division2 = b%a;

	    if((division1== 0) && (division2== 0))
        {
            logico = 1;
        }
        else
        {
            logico = 0;
        }

        return logico;
	}
