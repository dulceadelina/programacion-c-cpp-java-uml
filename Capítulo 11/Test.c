#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pa;
    int i = 0, n;
    printf("Introduce the number of elements for an array made whit a pointer: ");
    scanf("%d", &n);

    pa = (int*) malloc((n+1)*sizeof(int));

    for(i = 0; i < n; i++)
    {
        printf("\nIntroduce the %d number", i);
        scanf("%d", pa);
        pa++;
    }
    pa--;
    for(i = 0; i < n; i++)
    {
        printf("%d\n", *pa);
        pa++;
    }
    return 0;
}
