/*Prints the alphabet in lowercase 10 times*/

#include "main.h"

void print_alphabet_x10(void)
{
    int alph;
    int count = 0;

    while (count < 10)
        {
            for (alph = 'a'; alph <= 'z'; alph++)
                {
                    _putchar(alph);
                }
            _putchar('\n');    
            count++;    
        }           
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}