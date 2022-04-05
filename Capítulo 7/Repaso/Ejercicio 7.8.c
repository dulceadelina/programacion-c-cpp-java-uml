/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	06/02/2019 */
#include <stdio.h>

int main()
{
    int n, i, k, divisores = 0, primos = 2;

    printf("Ingresa n: ");
    scanf("%d", &n);

    printf("1 2");
    i = 3;
    while(primos <= n)
    {
        for(k = 1; k <= i; k++)
        {
            if((i%k) == 0)
                divisores++;
        }
        if(divisores == 2)
        {
            printf(" %d", i);
            primos++;
        }
        i++;
    }
    return n;
}
