/*  Dulce Adelina Zuñiga Ramos
	7. Funciones y Recursividad
	25/03/2017 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Arabigos(char *romano, int n);

int main()
{
    int ancho;
    char romano[10];
    printf("Ingresa la cifra en números romanos: ");
    scanf("%s", &romano);

    ancho = strlen(romano);
    printf("En números decimales es %d", Arabigos(romano, ancho) );
}

int Arabigos(char *romano, int n)
{
    int i, decimal = 0;
    char aux;

    for(i = 0; i < n; i++)
    {
        aux = romano[i];
        aux = toupper(aux);

        switch(aux)
        {
            case 'M':
                decimal += 1000;
                break;
            case 'D':
                decimal += 500;
                break;
            case 'C':
                decimal += 100;
                break;
            case 'L':
                decimal += 50;
                break;
            case 'X':
                decimal += 10;
                break;
            case 'V':
                decimal += 5;
                break;
            case 'I':
                decimal += 1;
                break;
        }
    }
    return decimal;
}
