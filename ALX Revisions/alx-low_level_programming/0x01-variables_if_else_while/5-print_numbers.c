/*Prints single digits of base10 numbers starting from 0*/

#include <stdio.h>

int main()
{
    int num;
    for (num = 0; num <= 9; num++)
        {
            printf("%d", num);
        }    

    putchar('\n');
    return (0);   
}
