/*prints all the numbers of base 16 in lowercase*/

#include <stdio.h>

int main()
{
    int base16;

    for (base16 = 0; base16 < 16; base16++)
        {
            if (base16 < 10)
                putchar('0'+ base16);
            else
                putchar(87 + base16);  
        }
    putchar('\n');
    return (0);    
}