#include <stdio.h>

int main()
{
    float a, b, c;
    char operador;

    printf("Ingresa la operaci�n: ");
    printf("\n +");
    printf("\n -\n");
    puts("*");
    puts("/");
    scanf("%c", &operador);
    printf("Ingresa el primer valor: ");
    scanf("%f", &a);
    printf("Ingresa el segundo valor:");
    scanf("%f ", &b);

    switch(operador)
    {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
        default:
            printf("Car�cter inv�lido");
            break;
    }

    printf(" el resultado es = %f", c);
}
