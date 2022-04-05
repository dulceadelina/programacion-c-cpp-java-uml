/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	08/02/2017 */

	#include <stdio.h>
	#include <ctype.h>

	int main ()
	{
	    char inicial;
	    printf("¿Cuál es su primer carácter inicial?: ");
	    scanf("%c%*c", &inicial);
	    while(!isalpha(inicial))
        {
            puts("Carácter no alfabético");
            printf("Cuál es su siguiente inicial? :");
            scanf("%c%*c", &inicial);
        }
		puts("¡Terminado!");
		return 0;
	}
