/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	31/01/2019 */
#include <stdio.h>

char devuelve(int num);

int main()
{
    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero);
    printf("\n%c", devuelve(numero));

    return 0;
}

char devuelve(int num)
{
        if(num > 0)
        {
            return 'P';
        }
        else if(num <= 0)
        {
            return 'N';
        }
}
