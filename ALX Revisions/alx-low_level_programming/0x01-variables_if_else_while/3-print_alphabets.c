/*Print alphabet in lower and upper case using putchar*/

#include <stdio.h>

int main()
{
    char alph = 'a';
    char ALPH = 'A';
    
    for (alph = 'a'; alph <= 'z'; alph++)
        putchar(alph);
    for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
        putchar(ALPH);

    putchar('\n');
    return (0);        
}