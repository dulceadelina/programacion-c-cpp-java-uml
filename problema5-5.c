#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    const char *Unidad[]={"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    const char *Decena[]={"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const char *Centena[]= {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const char *Millar[] = {"", "M", "MM"};

    printf("Ingrese un numero entre 1000 y 2000: \n");
    scanf("%d",&N);

    int u=N%10;
    int d=(N/10)%10;
    int c=(N/100)%10;
    int m = N/1000;

    if(N >= 1000)
    {
        printf("%s%s%s%s", Millar[m], Centena[c], Decena[d], Unidad[u]);
    }
    return 0;
}
