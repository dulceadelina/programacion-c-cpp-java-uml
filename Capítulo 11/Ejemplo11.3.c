#include <stdio.h>
void main()
{
    int n = 75;
    int* p = &n;
    printf("n = %d, &n = %p, p = %p\n", n, &n, p);
    printf("&p = %p\n", &p);
    printf("*p = %d", *p);
}
