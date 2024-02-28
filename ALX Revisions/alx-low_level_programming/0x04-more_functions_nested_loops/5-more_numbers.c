/*prints 10 times the numbers 0 to 14*/

#include "main.h"

void more_numbers(void)
{
    int num;
    int count = 0;
    while (count >= 0 && count < 10)
        {
            for (num = 0; num < 15; num++)
                {
                    if (num >= 10)
                        _putchar(num/10 + '0');   
                    _putchar(num%10 + '0');
                }  
            _putchar('\n');     
            count++;    
        }

}