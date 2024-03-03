#include <stdio.h>

int decr(int *a)
{
    *a = *a - 1;
}

int main()
{
    int i;
    int j;
    
    i = 10;

    for (j = 10; j >= 0; j--)
        {
            if (i != 0)
                {
                    printf("%d, ",i);
                }
            else
                {
                    printf("%d", i);
                }
            decr(&i);        
        }
    printf("\n");    
    return (0);    
}