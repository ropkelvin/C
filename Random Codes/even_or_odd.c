/*Simple program to if a number is even or odd*/

#include <stdio.h>

int main()
{
    int range = 0;
    while (range < 5 )
    {
        int num;
        printf("Input number to see if even or odd: ");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("The number: %d is even.\n", num);
        }
        else
            {
            printf("The number: %d is odd.\n", num);
            }
        range++;    
    }
}