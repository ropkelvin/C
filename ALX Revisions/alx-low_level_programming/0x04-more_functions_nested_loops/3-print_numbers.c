/*Prints numbers from 0 to 9*/

#include "main.h"

void print_numbers(void)
{
    int c;
    c = '0';
    while (c <= '9')
    {
        _putchar(c);
        c++;
    }
    _putchar('\n');
}