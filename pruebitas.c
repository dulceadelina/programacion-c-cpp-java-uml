//15/08/2018
#include <stdio.h>
void apuntadorapuntador();

int main()
{
    int opcion;
    printf("1.- Apuntador a apuntador");
    scanf("%d", opcion);

    switch(opcion)
    {
        case 1:
            apuntadorapuntador();
            break;
        default:
            break;
    }

    return 0;
}

void apuntadorapuntador()
{
    char c = 'z';
    printf("c = %c\n", c);
    printf("&c = %d\n", &c);

    char *pc = &c;
    printf("pc = %d\n", pc);
    printf("&pc = %d\n", pc);
    printf("*pc = %c\n\n", *pc);

    char **ppc = &pc;
    printf("ppc = %d\n", ppc);
    printf("&ppc = %d\n", ppc);
    printf("*ppc = %c\n\n", *ppc);

    char ***pppc = &ppc;
    printf("pppc = %d\n", pppc);
    printf("&pppc = %d\n", pppc);
    printf("*pppc = %c\n\n", *pppc);
    ***pppc = 'm';
    printf("*pppc = %c\n\n", *pppc);
}
