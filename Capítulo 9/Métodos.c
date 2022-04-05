/*  Dulce Adelina Zu�iga Ramos
	9. Algoritmos de ordenaci�n y b�squeda
	13/05/2017 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MenuPrincipal();
void CrearArreglo(long a[], int n);
void ordBurbuja(long a[], int n);
void ordSeleccion(long a[], int n);

int main()
{
    MenuPrincipal();
}

void MenuPrincipal()
{
    int i, opcion, elementos;

    printf("* * * M�TODOS DE ORDENACI�N Y B�SQUEDA * * *\n");
    printf("0.- Crear arreglo");
    printf("1.- Ordenaci�n por burbuja\n");
    printf("2.- Ordenaci�n por selecci�n\n");
    printf("3.- Ordenaci�n por inserci�n\n");
    printf("4.- Ordenaci�n r�pida (quicksort)\n");
    printf("5.- B�squeda binaria\n");
    printf("6.- B�squeda Secuencial\n");
    printf("7.- Salir\n");

    printf("\nElige una opci�n: ");
    scanf("%d", &opcion);

    printf("�De cu�ntos elementos quieres el arreglo?... ");
    scanf("%d", &elementos);

    srand(time(NULL));

    long v[elementos];

    for(i = 0; i < elementos; i++)
        v[i] = rand() % 100;
    switch(opcion)
    {
        case 1:
            printf("\n Arreglo desordenado\n");

            for(i = 0; i < elementos; i++)
            {
                printf(" %d  ", v[i]);
                if(i+1 % 5 == 0)
                    printf("\n");
            }

            printf("\nArreglo ordenado\n");
            ordBurbuja(v, elementos);
            for(i = 0; i < elementos; i++)
            {
                printf(" %d  ", v[i]);
                if(i+1 % 5 == 0)
                    printf("\n");
            }

            printf("\n");
            system("pause");
            break;

        case 2:

            printf("\n Arreglo desordenado\n");

            for(i = 0; i < elementos; i++)
            {
                printf(" %d  ", v[i]);
                if(i+1 % 5 == 0)
                    printf("\n");
            }

            printf("\nArreglo ordenado\n");
            ordSeleccion(v, elementos);
            for(i = 0; i < elementos; i++)
            {
                printf(" %d  ", v[i]);
                if(i+1 % 5 == 0)
                    printf("\n");
            }

            printf("\n");
            system("pause");
            break;
    }
}

/*void ordBurbuja(long a[], int n)
{
    int interruptor = 1;
    int pasada, j;
    for(pasada = 0; pasada < n - 1 && interruptor; pasada++)
    {
        interruptor = 0;
        for(j = 0; j < n-pasada-1; j++)
        {
            if(a[j] > a[j+1])
            {
                long aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }
}*/

void ordBurbuja(long a[], int n)
{
    int i, j;
    int indiceIntercambio;

    i = n - 1;

    while(i > 0)
    {
        indiceIntercambio = 0;

        for(j = 0; j < i; j++)
            if(a[j+1] < a[j])
            {
                long aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                indiceIntercambio = j;
            }
            i = indiceIntercambio;
    }
}

void ordSeleccion(long a[], int n)
{
    int indiceMenor, i, j;

    for(i = 0; i < n-1; i++)
    {
        indiceMenor = i;
        for(j = i+1; j < n; j++)
            if(a[j] < a[indiceMenor])
                indiceMenor = j;
        if(i != indiceMenor)
        {
            long aux = a[i];
            a[i] = a[indiceMenor];
            a[indiceMenor] = aux;
        }
    }
}
