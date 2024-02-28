/*draws straight line in terminal*/

#include "main.h"

void print_line(int n)
{
    int i;
    for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
    _putchar('\n');
}