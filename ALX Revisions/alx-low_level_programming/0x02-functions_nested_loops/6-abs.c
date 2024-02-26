/* computes the absolute value of an integer.*/

#include "main.h"
#include <stdio.h>

int _abs(int n)
{
    if (n < 0)
        {
            return (n * (-1));
        }
    else if (n == 0)
        {
            return (0);
        }  
    else 
        return (1);      
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}