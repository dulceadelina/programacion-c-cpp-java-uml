/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	01/02/2019 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    div_t resultado;
    resultado = div(19, 4);
    printf("Cociente %d", resultado.quot);
    printf("Resto %d", resultado.rem);
    return 0;
}
