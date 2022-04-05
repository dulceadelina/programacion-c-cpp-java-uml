#include <stdio.h>

int main()
{
    char hora[5];

    printf("Ingresa la hora: ");
    scanf("%s", hora);

    int conversion, comprueba = 0;

    if(hora[0] == '0')
    {
        conversion = 0;
    }
    else if(hora[0] == '1')
    {
        conversion = 10;
    }
    else if(hora[0] == '2')
    {
        conversion = 20;
    }

    switch(hora[1])
    {
        case '1':
            conversion += 1;
            break;
        case '2':
            conversion += 2;
            break;
        case '3':
            conversion += 3;
            break;
        case '4':
            conversion += 4;
            break;
        case '5':
            conversion += 5;
            break;
        case '6':
            conversion += 6;
            break;
        case '7':
            conversion += 7;
            break;
        case '8':
            conversion += 8;
            break;
        case '9':
            conversion += 9;
            break;
        default:
            conversion = conversion;
            break;
    }

    if(conversion > 12)
    {
        conversion = conversion - 12;
        comprueba = 1;
    }

    printf("%d:%s", conversion, &hora[3]);
    if(comprueba == 1)
        printf(" PM");
    else
        printf(" AM");
}
