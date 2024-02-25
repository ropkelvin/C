/*prints all possible different combinations of two digits*/

#include <stdio.h>

int main()

{
    int j;
    int k;

    for (j = 0; j < 9; j++)
        {
            k = j + 1;
            do{
                putchar('0' + j);
                putchar('0' + k);
                    if (j < 8 || k < 8)
                        {
                            putchar(',');
                            putchar(32);
                        }
                k++;
            }while (k < 10);
        }
    putchar('\n');
    return (0);    
}