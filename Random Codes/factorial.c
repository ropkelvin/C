/*get factorial of a number*/

#include <stdio.h>

unsigned int factorial(int num)
{
    if (num == 1)
        return (1);

    if (num == 0)
        return (1);

    return (num * factorial(num -1));        
}

int main()
{
    int a;
    
    for (a = 0; a <= 10; a++)
        {
            printf("Factorial of %d is %lu\n", a, factorial(a));
        }
    return(0);    
}