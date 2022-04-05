/** Dulce 29/02/2020
    CAPÍTULO 11: Apuntadores (punteros) **/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#define L 100

int DetermineSimetry(int *p);
void GenerateMatrix(int *m[], int n);
void DataEntry(int *n);

int main()
{
    int i, j;
    DataEntry(&i); j = i;
    //printf("%d", j);
    int *m[i];
    GenerateMatrix(*m[0], i);

    return 0;
}

void DataEntry(int *n)
{
    do
    {
        printf("\nPlease entry the size of the matrix: ");
        scanf("%d", n);
    }while(*n < 2 && *n > 100);

}
