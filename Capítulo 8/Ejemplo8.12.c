/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	27/03/2017 */
#include <stdio.h>

int main()
{
    int car;
    int cuenta = 0;
    while((car = getchar())!=EOF)
        if(car == 't') ++cuenta;
    printf("\n %d letras t \n", cuenta);
    printf("\n ");
}
