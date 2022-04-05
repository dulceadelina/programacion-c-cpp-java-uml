/*
 ** Dulce Adelina Zuñiga Ramos
 ** Euclides Iterativo
 */

#include <stdio.h>

int main()
{
    int mayor, menor, num1, num2, resto;

    printf("Ingresa el primer número: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        mayor = num1;
        menor = num2;
    }
    else
    {
        mayor = num2;
        menor = num1;
    }

    do
    {
        resto = mayor % menor;

        mayor = menor;
        menor = resto;
    }while(resto != 0);

    printf("El MCD de %d y %d es %d", num1, num2, mayor);
}
