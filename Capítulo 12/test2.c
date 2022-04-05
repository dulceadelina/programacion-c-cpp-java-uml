/** Dulce 14/03/2020
    CAPÍTULO 12: Entradas y salidas por archivos**/
#include <stdio.h>
#include <ctype.h>
void genera(int* a, int *b);
int main()
{
    char ans = 's';

    while(toupper(ans) == 'S')
    {
        int x, y;
        genera(&x,&y);
        printf("x = %d, y = %d", x, y);
        printf("\nIngresar más datos?: (s/n) ");
        scanf("%c*c", &ans);
    }
    return 0;
}
void genera(int* a, int *b)
{
    printf("Ingrese x: ");
    scanf("%d", a);
    printf("Ingrese y: ");
    scanf("%d", b);
}
