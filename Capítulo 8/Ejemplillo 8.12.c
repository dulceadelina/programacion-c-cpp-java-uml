/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	13/02/2019 */
#include <stdio.h>

int main()
{
    int car;
    int cuenta = 0;
    while((car = getchar( )) != EOF)
        if(car == 't') ++cuenta;
    printf("\n %d letras t \n", cuenta);
    return 0;
}
