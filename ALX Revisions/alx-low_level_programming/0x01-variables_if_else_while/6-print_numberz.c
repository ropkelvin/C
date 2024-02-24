/*Prints single digits of base10 numbers starting from 0
*without using char type
*/

#include <stdio.h>

int main()
{
    int num;
    for (num = 0; num <= 9; num++)
        {
            putchar(num + '0');
        }
    putchar('\n');    
}
