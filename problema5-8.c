#include <stdio.h>

int main()
{
    int year, resto1;
    printf("Ingrese año: ");
    scanf("%d", &year);
    resto1 = year%400;

    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                printf("Es bisiesto");
            }
        }

        if(resto1 != 0)
        {
            if(resto1%100 == 0)
            {
                printf("No es bisiesto");
            }
            else if(resto1%4 == 0)
            {
                printf("Es bisiesto");
            }
        }
    }
    else
        printf("No es bisiesto");

    return 0;
}
