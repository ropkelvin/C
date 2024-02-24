/*prints all possible combinations of single-digit numbers.*/

#include <stdio.h>

int main()
{
    int num;

    for (num = 0; num < 10; num++)
        {
            putchar(num + '0');
                {
                    if (num < 9)    
                    putchar(',');
                    putchar(' ');
                }    
        }   
    putchar('\n');    
    return (0);    
}