/*  Dulce Adelina Zu�iga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	15/02/2019 */
#include <stdio.h>
#include <string.h>

void main(void)
{
    char s[100] = "Buenos d�as Mr. Palacios", t[100];
    strcpy(t, s);
    strcpy(t+12, "Mr. C");
    printf("\n%s\n%s", s, t);
}
