/*  Dulce Adelina Zuñiga Ramos
	11. Apuntadores (punteros)
	02/09/2017 */
#include <stdio.h>
#include <stdlib.h>

struct s_boton
{
    char *rotulo;
    int codigo;
};

typedef struct s_boton boton;
void mostrar_boton(boton *btn);

void main()
{
    boton ejemplo;

    ejemplo.rotulo = 'c';
    ejemplo.codigo = 123;

    boton *pt; //puntero boton
    pt = &ejemplo;

    mostrar_boton(pt);
}

void mostrar_boton(boton *btn)
{
    printf("\nRotulo: %c", btn->rotulo);
    printf("\nCódigo: %d", btn ->codigo);
}
