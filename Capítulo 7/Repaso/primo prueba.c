/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	06/02/2019 */
#include <stdio.h>

int main()
{
    int numero, i, divisores = 0;
    printf("Introduce un número: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++)
    {
        if(numero%i == 0)
            divisores++;
    }

    if(numero == 1 || numero == 2)
        printf("Es primo");

    else if(divisores == 2)
    {
        printf("Es primo");
    }
    else if(divisores > 2)
        printf("No es primo");

    return 0;
}
