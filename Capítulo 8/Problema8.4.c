/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	28/03/2017 */
#include <stdio.h>

void Primos();

int main()
{
    Primos();
}

void Primos()
{
    int i, j, k, n = 5, contador = 0, divisores = 0;
    int primos[n];

    for(k = 0; contador <= n; k++)
    {
        for(i = 1; ; i++)
        {
            for(j = 1; divisores <= 2; j++)
            {
                if(i % j == 0)
                    ++divisores;
                if(divisores == 2)
                {
                    primos[k] = i;
                    ++contador;
                }
                else
                    goto
            }

        }
    }

    for(i = 0; i < n; i++)
    {
        printf(" %d ", primos[i]);
    }
}
