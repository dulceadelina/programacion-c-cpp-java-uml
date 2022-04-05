/*  Dulce Adelina Zuñiga Ramos
	6. Estructuras de control: bucles
	01/02/2017 */

	#include <stdio.h>

	int main ()
	{
	    int i;
	    printf("Años bisiestos: ");

	    for(i = 2100; i < 2200; i++)
        {
            if(i % 4 == 0 )//&& i % 400 == 0 && i % 100 != 0
            {
                printf(" %d ", i);
            }
        }
	}
