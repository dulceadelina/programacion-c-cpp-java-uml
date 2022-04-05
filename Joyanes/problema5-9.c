#include <stdio.h>

int bisiesto(int ano)
{
    int year = ano, resto1;
    resto1 = year%400;

    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                return 1;
            }
        }

        if(resto1 != 0)
        {
            if(resto1%100 == 0)
            {
                return 0;
            }
            else if(resto1%4 == 0)
            {
                return 1;
            }
        }
    }
    else
        return 0;
}

int main()
{
    int m, a, dias, prueba;
    const char *meses[]= {"", "enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

    printf("Ingresa mes: ");
    scanf("%d", &m);
    printf("Ingresa el año: ");
    scanf("%d", &a);

    prueba = bisiesto(a);

    switch(m)
    {
        case 1:
            dias = 31;
            break;
        case 2:
            if(prueba == 1)
            {
                dias = 29;
            }
            else
            {
                dias = 28;
            }
            break;
        case 3:
            dias = 31;
            break;
        case 4:
            dias = 30;
            break;
        case 5:
            dias = 31;
            break;
        case 6:
            dias = 30;
            break;
        case 7:
            dias = 31;
            break;
        case 8:
            dias = 31;
            break;
        case 9:
            dias = 30;
            break;
        case 10:
            dias = 31;
            break;
        case 11:
            dias = 30;
            break;
        case 12:
            dias = 31;
            break;
    }

    printf("Días del mes de %s son %d", meses[m], dias);

    return 0;
}
