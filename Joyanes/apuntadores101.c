#include <stdio.h>
char c;
int main()
{
    char *pc;
    pc = &c;
    for(c = 'A'; c <= 'Z'; c++)
    {
        printf("%c", *pc);
    }
}
