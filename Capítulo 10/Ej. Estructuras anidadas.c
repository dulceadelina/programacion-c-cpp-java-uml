/*  Dulce Adelina Zu�iga Ramos
	10. Estructuras y uniones
	04/08/2017 */
#include <stdio.h>
#include <time.h>

struct fecha
{
    unsigned int mes, dia, anyo;
};
struct tiempo
{
    unsigned int horas, minutos;
};
enum tipo_operacion{deposito, retirada, aldia, estado};

typedef struct fecha Fecha;
typedef struct tiempo Tiempo;
typedef enum tipo_operacion TipOperacion;

struct registro_operacion
{
    long numero_cuenta;
    float cantidad;
    tipOperacion operacion;
    Fecha f;
    Tiempo t;
};

typedef struct registro_operacion RegistrOperacion;
RegistrOperacion entrada(void);

int main()
{
    RegistrOperacion w;
    w = entrada();
    printf("\n Operaci�n realizada\n\n");
    printf("\t%ld\n", w.numero_cuenta);
    printf("\t%d-%d-%d\n", w.f.dia, w.f.mes, w.f.anyo);
    printf("\t%d:%d\n", w.t.horas, w.t.minutos);

    return 0;
}

RegistrOperacion entrada(void)
{
    int x, y, z;
    RegistrOperacion una;
    printf("\nN�mero de cuenta: ");
    scanf("%ld", &una.numero_cuenta);
    puts("\tTipo de operaci�n");
    puts("Deposito(0)");
    puts("Retirdada de fondos(1)");
    puts("Puesta al d�a(2)");
    puts("Estado de la cuenta(3)");
    scanf("%d", &una.operacion);

    printf("\nFecha (dia mes a�o): ");
    scanf("%d %d %d", &una.f.dia, &una.f.mes, &una.f.anyo);

    printf("Hora de la operaci�n(hora minuto): ");
    scanf("%d %d", &una.t.horas, &una.t.minutos);

    return una;
}
