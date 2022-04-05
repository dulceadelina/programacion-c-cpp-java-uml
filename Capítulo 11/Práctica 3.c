/** Dulce Zuñiga
    08/10/2019 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int a[10];
    int b = 8;
    int* p;
    p = (int*)malloc(sizeof(int));
    *p = b;
    printf("&p: %p\n", &p);
    printf("p: %p\n", p);
    printf("*p: %d\n", *p);

    return 0;
}
