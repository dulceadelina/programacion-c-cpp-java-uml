/*  Dulce Adelina Zu�iga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	13/02/2019 */
#include <stdio.h>
#include <string.h>

void main()
{
    char cad[81], *a;
    int i, n;
    puts("Introduce l�neas, separando las palabras con blancos. \n ");
    a = gets(cad);
    while(a != NULL)
    {
        n = 0;
        for(i = 0; i < strlen(cad); i++)
            if(cad[i] == ' ') n++;
        if(i > 0) ++n;
        printf("N�mero de palabras: %d \n", n);
        a = gets(cad);
    }
}
