#include <stdio.h>

int main()
{
    int a, b;
    a = 1;

    printf("Ingresa el n�mero de filas: ");
    scanf("%d", &b);

    char arreglillo[b];
    arreglillo[0] = '*';

    do
    {
        printf("\n%s", arreglillo);
        arreglillo[a] = '*';
        a++;
    }while(a <= b);

}
