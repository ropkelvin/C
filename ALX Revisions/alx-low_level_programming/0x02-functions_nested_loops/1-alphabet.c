/* prints the alphabet, in lowercase, followed by a new line.*/

#include "main.h"

void print_alphabet(void)
{
    int alph;
    for (alph = 'a'; alph <= 'z'; alph++)
        {
            _putchar(alph);
        }
    _putchar('\n');     
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}