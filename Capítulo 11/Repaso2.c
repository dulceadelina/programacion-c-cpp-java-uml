#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_e = 100;
    int *ptr1 = &valor_e;
    int **ptr3 = &ptr1;

    printf("valor_e = %d\n", valor_e);
    printf("ptr1 = %p\n", ptr1);
    printf("*ptr1 = %d\n", *ptr1);
    printf("ptr3 = %p\n", ptr3);
    printf("*ptr3 = %d\n", **ptr3);

    void* pt;
    int* po = NULL;

    return 0;
}
