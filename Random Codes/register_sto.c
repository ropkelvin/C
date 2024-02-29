/*register storage class*/

#include <stdio.h>

int main()
{
    int num;
    register int count;

    for (count = 0; count < 3; count++)
        {
            for (num = 0; num <= 1; num++)
                {
                    printf("just checking!\n");
                }
        }
}