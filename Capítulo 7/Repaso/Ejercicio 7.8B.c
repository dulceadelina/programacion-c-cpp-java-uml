/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	06/02/2019 */
#include <stdio.h>

int main()
{
    int n, i, k, divisores, m, j;

    printf("Ingresa n: ");
    scanf("%d", &n);

    i = 1;
    divisores = 0;
    j = 0;
    int primos[n];

    while(j < n)
    {
        if(i == 1)
        {
            primos[j] = 1;
            j++;
        }
        if(i == 2)
        {
            primos[j] = 2;
            j++;
        }
        if(i > 2)
        {
            for(k = 1; k <= i; k++)
            {
                if(i%k == 0)
                {
                    divisores++;
                }
            }
            if(divisores == 2)
            {
                primos[j] = i;
                j++;
            }
        }
        i++;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", primos[i]);
    }
    return 0;
}
