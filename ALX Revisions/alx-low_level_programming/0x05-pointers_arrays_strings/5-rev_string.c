/*reverses a string*/

#include "main.h"

void rev_string(char *s)
{
    int n;
    n = 0;

    while (s[n] != '\0')
        {
            n++;
        }

    for (n = n - 1; n >= 0; n--)   
        {
            _putchar(s[n]);
        } 
    _putchar('\n');    
}