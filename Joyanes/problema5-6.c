#include <stdio.h>

int main()
{
    int A, B, C, D;

    printf("Ingrese un número de cuatro dígitos: ");
    scanf("%d%d%d%d", &A, &B, &C, &D);

    if((B >= 5) && (C >= 5))
    {
        B = 0;
        A++;
        C = 0;
        D = 0;
    }
    if((C <= 5) && (B < 5))
    {
        C = 0;
        D = 0;
    }
    if((B < 5) && (C >= 5))
    {
        B++;
        C = 0;
        D = 0;
    }
    printf("%d%d%d%d", A, B, C, D);
}
