/*prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.*/

#include "main.h"

void jack_bauer(void)
{
    int hr;
    int min;

    hr = 0;

    while (hr < 24)
    {
        min = 0;
        while (min < 60)
            {
                _putchar(hr/10 + '0');
                _putchar(hr%10 + '0');
                _putchar(':');
                _putchar(min/10 + '0');
                _putchar(min%10 +'0');
                _putchar('\n');
                min++;
            }
        hr++;    
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}