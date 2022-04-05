/*  Dulce Adelina Zuñiga Ramos
	8. Arreglos (arrays), listas y tablas. Cadenas
	08/02/2019 */
#include <stdio.h>

int main()
{
    int i, j, k;
    int libro[3][2][3];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("\nElemento [%d][%d][%d]", i, j, k);
                scanf("%c", &libro[i][j][k]);
            }
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("%c", libro[i][j][k]);
                /*if(k == 3)
                {
                    printf("\n");
                }*/
            }
        }
    }
    return 0;
}
