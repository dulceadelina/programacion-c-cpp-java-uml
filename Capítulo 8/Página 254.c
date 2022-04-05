/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	25/02/2019 */
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

void main(void)
{
    char* c = "333.55553 444444.2 3e+1221";
    char **a;
    double v = 0;
    a = (char**)malloc(1);

    v = strtod(c, a);
    if(errno != 0)
    {
        printf("Error \"%d\" al convertir la cadena.", errno);
        exit(-1);
    }
        printf("c = [%s], v = %lf\n", c, v);
        while((**a) != '\0')
        {
            c = *a;
            v = strtod(c, a);
            if(errno != 0)
            {
                printf("Error \"%d\" al convertir la cadena.", errno);
                exit(-1);
            }
            printf("c = [%s], v = %lf\n", c, v);
        }
}
