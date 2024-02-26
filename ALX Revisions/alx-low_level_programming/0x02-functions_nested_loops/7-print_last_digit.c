/*prints last digit of a number*/

#include "main.h"

int print_last_digit(int n)
{
   int last_digit;
   if (n > 0)
        {
            last_digit = (n % 10);
        }
    else if ( n < 0)
        {
            last_digit = ((n *(-1)) % 10);
        }
    else
        {
            last_digit = 0;
        }
    _putchar('0' + last_digit);
    return (last_digit);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
