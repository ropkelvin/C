/*prints every other character of a string, starting with the first character,*/

#include "main.h"

void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        {
            _putchar(*(str + i));
            i = i + 2;
        }
    _putchar('\n');    
}