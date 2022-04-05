/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	21/03/2017 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Fecha(int dd, int mm, char *year);

int main()
{
    int dia, mes;
    char year[4];
    puts("Ingresa día, mes y año: ");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%s", &year);
    Fecha(dia, mes, year);
}

void Fecha(int dd, int mm, char *year)
{
    printf("%d", dd);
    printf("/");
    printf("%d", mm);
    printf("/");
    int aux, i;

    aux = strlen(year);

    char nuevo[aux];

    for(i = 2; i >= (aux-2); i--)
    {
        nuevo[i-2] = year[i];
    }

    printf("%s", nuevo);
}
