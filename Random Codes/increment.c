#include <stdio.h>

int increment(int *a)
{
    *a = *a + 5;
}

int main()
{
    int num;
    int i;

    num = 10;

    for (i = 0; i < 5; i++)
        {
            printf("num is: %d\n", num);
            printf("address is: %x\n", &num);
            increment(&num);
        }
    return (0);
}