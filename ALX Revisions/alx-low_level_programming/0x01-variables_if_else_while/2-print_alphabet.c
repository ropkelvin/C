/*Prints alphabet using putchar function*/

#include <stdio.h>

int main()
{
    char ch = 'a';
    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);
        putchar('\n');
    return (0);    
}
