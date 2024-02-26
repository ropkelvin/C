/*add two numbers and return result*/

#include "main.h"
#include <stdio.h>

int add(int n, int m)
{
    int result;
    result = (n + m);
    return(result);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}