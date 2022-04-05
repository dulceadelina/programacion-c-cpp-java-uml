/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	29/03/2019 */
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, mayor, k , a = 0, b = 0, c = 0, s = 0, decimas, unidades;
    char sum1[20], sum2[20], A, B;
    printf("Introducir numero 1: ");
    gets(sum1);
    printf("Introducir número 2: ");
    gets(sum2);
    i = strlen(sum1);printf("\ni: %d", i);
    j = strlen(sum2);printf("\nj: %d", j);
    if(i > j)
        mayor = i;
    else
        mayor = j;
    k = mayor;
    char res[k];
    printf("\nk: %d\n", k);
    i = mayor;
    while(i >= 0)
    {
        A = sum1[i];
        B = sum2[i];
        switch(A)
        {
            case '0':
                a = 0;
                break;
            case '1':
                a = 1;
                break;
            case '2':
                a = 2;
                break;
            case '3':
                a = 3;
                break;
            case '4':
                a = 4;
                break;
            case '5':
                a = 5;
                break;
            case '6':
                a = 6;
                break;
            case '7':
                a = 7;
                break;
            case '8':
                a = 8;
                break;
            case '9':
                a = 9;
                break;
            default:
                break;
        }
        switch(B)
        {
            case '0':
                b = 0;
                break;
            case '1':
                b = 1;
                break;
            case '2':
                b = 2;
                break;
            case '3':
                b = 3;
                break;
            case '4':
                b = 4;
                break;
            case '5':
                b = 5;
                break;
            case '6':
                b = 6;
                break;
            case '7':
                b = 7;
                break;
            case '8':
                b = 8;
                break;
            case '9':
                b = 9;
                break;
            default:
                break;
        }
        s = c + a + b;
        decimas = s / 10;
        unidades = s % 10;
        switch(unidades)
        {
            case 0:
                res[k] = '0';
                break;
            case 1:
                res[k] = '1';
                break;
            case 2:
                res[k] = '2';
                break;
            case 3:
                res[k] = '3';
                break;
            case 4:
                res[k] = '4';
                break;
            case 5:
                res[k] = '5';
                break;
            case 6:
                res[k] = '6';
                break;
            case 7:
                res[k] = '7';
                break;
            case 8:
                res[k] = '8';
                break;
            case 9:
                res[k] = '9';
                break;
            default:
                break;
        }
        c = decimas;
        i--;
        k--;
    }
    /*if(c > 5)
    {
         switch(c)
        {
            case 0:
                res[k] = '0';
                break;
            case 1:
                res[k] = '1';
                break;
            case 2:
                res[k] = '2';
                break;
            case 3:
                res[k] = '3';
                break;
            case 4:
                res[k] = '4';
                break;
            case 5:
                res[k] = '5';
                break;
            case 6:
                res[k] = '6';
                break;
            case 7:
                res[k] = '7';
                break;
            case 8:
                res[k] = '8';
                break;
            case 9:
                res[k] = '9';
                break;
            default:
                break;
        }
    }*/
    for(i = 0; i < mayor; i++)
        printf("%c", res[i]);
    return 0;
}
