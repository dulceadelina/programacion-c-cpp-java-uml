/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	01/02/2019 */
#include <stdio.h>
void main()
{
    int n = 100;
    static int m = 7;
    void f(int i)
    {
        n += (i+m);
    }
    void g(void)
    {
        printf("n = %d\n", n);
    }
}
