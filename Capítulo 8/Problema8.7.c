/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	28/03/2017 */
#include <stdio.h>

void MayorMenor(int n);

int main()
{
    int cantidad;

    printf("Ingresa la cantidad de elementos: ");
    scanf("%d", &cantidad);
    MayorMenor(cantidad);
}
void MayorMenor(int n)
{
    int arreglo[n];
    int i, mayor, menor, posmy = 0, posmn = 0;
    printf("\n\n");
    for(i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d: ", i+1);
        scanf("%d", &arreglo[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf(" %d ", arreglo[i]);
    }

    mayor = arreglo[0];
    menor = arreglo[0];

    for(i = 0; i < n; i++)
    {
        if(arreglo[i] > mayor)
        {
            mayor = arreglo[i];
            posmy = i;
        }

        if(arreglo[i] < menor)
        {
            menor = arreglo[i];
            posmn = i;
        }
    }
    printf("\n\n");
    printf("El mayor es [%d] = %d y el menor es [%d] = %d", posmy, mayor, posmn, menor);
}
