/*  Dulce Adelina Zu�iga Ramos
	10. Estructuras y uniones
	07/08/2017 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

struct inventario
{
    char titulo[50];
    char fecha_pub[20];
    char autor[30];
    int num;
    int pedido;
    float precio_venta;
};
typedef struct inventario Inventario; // typedef + tipo de dato + nombre nuevo; -- en este caso // typedef tipodedatonombre + nuevo nombre

int main()
{
    Inventario libro[100]; // arreglo de 100 para el inventario o sea, 100 libros
    int total = 0; // total nos va a ayudar para ubicar la posici�n
    char resp;
    char b[21]; // b = el precio de venta, despu�s lo convertiremos a n�mero float

    do{
        system("cls");
        printf("Total libros %d \n", total+1);
        printf("�Cu�l es el t�tulo?: ");
        gets(libro[total].titulo);

        printf("�Cu�l es la fecha de publicaci�n?: ");
        gets(libro[total].fecha_pub);

        printf("�Qu�en es el autor?: ");
        gets(libro[total].autor);

        printf("�Cu�ntos libros existen?: ");
        scanf("%d", &libro[total].num);

        printf("�Cu�ntos ejemplares est�n pedidos?: ");
        scanf("%d", &libro[total].pedido);

        printf("�Cu�l es el precio de venta?: ");
        scanf("%d", &libro[total].precio_venta);
        //libro[total].precio_venta = atof(b);

        printf("�Hay m�s libros? (S/N)");
        scanf("%c*c", &resp);

        resp = toupper(resp);
        if(resp == 'S')
        {
            total++;
            continue;
        }
    }while(resp == 'S');

    return 0;
}
