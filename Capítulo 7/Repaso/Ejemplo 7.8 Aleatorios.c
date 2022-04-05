/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	01/02/2019 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))
#define TOPE 100

#define MAX(x,y) ((x)>(y)?(x):(y))
int main(void)
{
    int mx, i;
    randomize;
    mx = random(TOPE);
    printf("%d", mx);

    for(i = 2; i <= 10; i++)
    {
        int y;
        y = random(TOPE);
        printf("\n%d", y);
        mx = MAX(mx,y);
    }
    printf("\nEl mayor número aleatorio generado: %d", mx);
    return 0;
}
