#include <stdio.h>

void print(char *c)
{
    while (*c != '\0')
        {
            printf("%c", *c);
            c++;
        }
    printf("\n");    
}

void main()
{
    char c[] = "hello Rop";
    print(c);
}
