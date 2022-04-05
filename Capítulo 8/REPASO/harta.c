#include <stdio.h>

int main()
{
    int a, b, c, d, s;
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    s = a + b;
    c = s / 10;
    d = s % 10;

    printf("%d %d", c, d);


}
