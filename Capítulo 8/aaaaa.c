/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas.
	Programa que convierte número romano a decimal
	08/08/2019 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int convierte(char r[]);
int main()
{
    char romano[20];
    printf("Ingrese un número romano: ");
    scanf("%s", &romano);
    printf("El número en decimal es: %i", convierte(romano));
}

int convierte(char r[])
{
    int i = strlen(r), dc = 0;
    while(i >= 0)
    {
        char c = r[i];
        switch(c)
        {
            case 'I':
                dc += 1;
                break;
            case 'V':
                dc += 5;
                if(r[i-1] == 'I')
                {
                    dc -= 1;
                    i--;
                }
                break;
            case 'X':
                dc += 10;
                if(r[i-1] == 'I')
                {
                    dc -= 1;
                    i--;
                }
                break;
            case 'L':
                dc += 50;
                if(r[i-1] == 'X')
                {
                    dc -= 10;
                    i--;
                }
                break;
            case 'C':
                dc += 100;
                if(r[i-1] == 'X')
                {
                    dc -= 10;
                    i--;
                }
                break;
            case 'D':
                dc += 500;
                if(r[i-1] == 'C')
                {
                    dc -= 100;
                    i--;
                }
                break;
            case 'M':
                dc += 1000;
                if(r[i-1] == 'C')
                {
                    dc -= 100;
                    i--;
                }
                break;
        }
        i--;
    }
    return dc;
}
