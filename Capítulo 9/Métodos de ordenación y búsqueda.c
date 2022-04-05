/** Dulce Adelina Zuñiga Ramos
    9. Algoritmos de ordenación y búsqueda
    Programación en C, C++, Java y UML
    13/08/2019 **/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>

void OrdBurbuja(int a[],int n);
void OrdBurbuja2(int a[], int n);
void OrdSeleccion(int a[], int n);
void OrdInsercion(int a[], int n);
void quicksort(int a[], int primero, int ultimo);
int BusquedaBin(int lista[], int n, int clave);
int SolicitarLongitud();
void CrearArreglo(int a[], int n);
void ImprimirArreglo(int a[], int n);
void doslineas() { printf("\n\n"); }

int main()
{
    int opcion;
    int a[200];
    do
    {
        puts("1.- Ordenación burbuja");
        puts("2.- 2do método de ordenación burbuja");
        puts("3.- Ordenación por selección");
        puts("4.- Ordenación por inserción");
        puts("5.- Ordenación quicksort");
        puts("6.- Búsqueda binaria");
        puts("7.- Salir");
        printf("\n Ingrese una opción: ");
        scanf("%d", &opcion);
        int n, clave;
        switch(opcion)
        {

            case 1:
                n = SolicitarLongitud();
                a[n];
                CrearArreglo(a, n);
                OrdBurbuja(a, n);
                ImprimirArreglo(a, n);
                break;
            case 2:
                n = SolicitarLongitud();
                a[n];
                CrearArreglo(a, n);
                OrdBurbuja2(a, n);
                ImprimirArreglo(a, n);
                break;
            case 3:
                n = SolicitarLongitud();
                a[n];
                CrearArreglo(a, n);
                OrdSeleccion(a, n);
                ImprimirArreglo(a, n);
                break;
            case 4:
                n = SolicitarLongitud();
                a[n];
                CrearArreglo(a, n);
                OrdInsercion(a, n);
                ImprimirArreglo(a, n);
                break;
            case 5:
                n = SolicitarLongitud();
                a[n];
                CrearArreglo(a, n);
                quicksort(a, 0, n-1);
                ImprimirArreglo(a, n);
                break;
            case 6:
                n = SolicitarLongitud();
                a[n];
                CrearArreglo(a, n);
                OrdBurbuja(a, n);
                printf("Ingrese el número a buscar: ");
                scanf("%d", &clave);
                if((BusquedaBin(a, n, clave)) < 0)
                    printf("\nEl número no fue encontrado\n\n");
                else
                    printf("\nEl número fue encontrado\n\n");
        }
    }while(opcion <= 6);
    return 0;
}
void ImprimirArreglo(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d\t", a[i]);
    doslineas();
}
void CrearArreglo(int a[], int n)
{
    int i;
    srand(time(NULL));
    printf("\n Arreglo aleatorio \n");
    for(i = 0; i < n; i++)
    {
        a[i] = (rand() %100);
        printf("%d \t", a[i]);
    }
    doslineas();
}
int SolicitarLongitud()
{
    int n;
    printf("Ingrese la longitud del arreglo: ");
    scanf("%d", &n);
    return n;
}
void OrdBurbuja(int a[], int n)
{
    int interruptor = 1;
    int pasada, j;
    for(pasada = 0; pasada < n-1 && interruptor; pasada++)
    {
        interruptor = 0;
        for(j = 0; j < n-pasada-1; j++)
        {
            if(a[j] > a[j+1])
            {
                long aux = a[j];
                a[j] = a[j +1];
                a[j + 1] = aux;
            }
            interruptor = 1;
        }
    }
}
void OrdBurbuja2(int a[], int n)
{
    int i, j;
    int indiceintercambio;
    /** i es el índice del último elemento de la sublista **/
    i = n-1;
    /** el proceso continúa hasta que no haya intercambios **/
    while(i > 0)
    {
        indiceintercambio = 0;
        /** explirar la sublista a[0] a a[i] */
        for(j = 0; j < i; j++)
        {/**intercambiar y actualiar indiceintercambio */
            if(a[j+1] < a[j])
            {
                long aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                indiceintercambio = j;
            }
        }
        /**i se pone al valor del índice del último intercambio */
        i = indiceintercambio;
    }
}
/**ordenar un array de n elementos de tipo double
   utilizando el algoritmo de ordenación por selección **/
void OrdSeleccion(int a[], int n)
{
    int indicemenor, i, j;
    int p = 0;
    ///ordenar a[0]...a[n-2], a[n-1] en cada pasada
    for(i = 0; i < n-1; i++)
    {
        indicemenor = i;
        for(j = i+1; j < n; j++)
        {
            if(a[j] < a[indicemenor])
                indicemenor = j;
        }
        if(i != indicemenor)
        {
            double aux = a[i];
            a[i] = a[indicemenor];
            a[indicemenor] = aux;
        }
        p++;
    }
    printf("\nPasadas: \n", p);
}
void OrdInsercion(int a[], int n)
{
    int i, j;
    int aux;
    for(i = 1; i < n; i++)
    {
        j = i;
        aux = a[i];
        while(j > 0 && aux < a[j-1])
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = aux;
    }
}
void quicksort(int a[], int primero, int ultimo)
{
    int i, j, central;
    double pivote;
    central = (primero + ultimo)/2;
    pivote = a[central];
    i = primero;
    j = ultimo;
    do{
        while(a[i] < pivote) i++;
        while(a[j] > pivote) j--;
        if(i <= j)
        {
            double tmp;
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }while(i <= j);
    if(primero < j)
        quicksort(a, primero, j);
    if(i < ultimo)
        quicksort(a, i, ultimo);
}
int BusquedaBin(int lista[], int n, int clave)
{
    /** Búsqueda binaria. Devuelve el índice del elemento buscado
        o bien -1 en caso de fallo **/
    int central, bajo, alto;
    int valorcentral;
    bajo = 0;
    alto = n - 1;
    while(bajo <= alto)
    {
        central = (bajo + alto)/2;
        valorcentral = lista[central];
        if(clave == valorcentral)
            return central;
        else if(clave < valorcentral)
            alto = central - 1;
        else
            bajo = central + 1;
    }
    return -1;
}
