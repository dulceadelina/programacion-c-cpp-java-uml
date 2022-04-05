/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	13/02/2019 */
#include <stdio.h>
#include <ctype.h>
void sgtepal(char* p);
int main()
{
    char car, pre = '\n';
    while((car = getchar( )) != EOF)
    {
        if(pre == ' ' || pre == '\n')
            putchar(toupper(car));
        else
            putchar(car);
        pre = car;
    }
    return 0;
}
