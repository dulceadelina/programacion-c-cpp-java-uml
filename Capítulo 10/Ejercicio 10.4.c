/*  Dulce Adelina Zu�iga Ramos
	10. Estructuras y uniones
	09/08/2017 */
#include <stdio.h>

struct CuentaBancaria
{
    long int no_cuenta;
    char nombre[50];
    char calle[20];
    char ciudad[20];
    char estado[20];
    int cp;//c�digo postal
    int tel;//tel�fono
    int cod_sucursal;
};

typedef struct CuentaBancaria cuenta;
