/*  Dulce Adelina Zu�iga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	27/03/2017 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Cuenta(char *cadena);

int main()
{
    char linea[50];
    printf("Ingresa una cadena de caracteres... ");
    gets(linea);

    Cuenta(linea);
    return 0;
}

void Cuenta(char *cadena)
{
    int i, n, vocales = 0, consonantes = 0, digitos = 0;
    char aux;

    n = strlen(cadena);

    for(i = 0; i < n; i++)
    {
        aux = toupper(cadena[i]);

        if(isalpha(aux))
        {
            if(aux == 'A' || aux == 'E' || aux == 'I' || aux == 'O' || aux == 'U')
                vocales++;
            else
                consonantes++;
        }
        if(isdigit(aux))
            digitos++;
    }

    printf("Caracteres: %d\n", n);
    printf("N�mero de vocales: %d\n", vocales);
    printf("N�mero de consonantes: %d\n", consonantes);
    printf("N�mero de digitos: %d\n", digitos);
}
