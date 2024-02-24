/*Print lowercase alphabet in reverse*/

#include <stdio.h>

int main()
{
    char alph;
    for (alph = 'z'; alph >= 'a'; alph--)
        {
            putchar(alph);
        }
    putchar('\n');
    return (0);    
}