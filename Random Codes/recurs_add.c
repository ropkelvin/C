/*addition uisng recursive method*/

#include <stdio.h>

unsigned int add(unsigned int num)
{
    if (num == 0)
        return (0);

    return ((num % 10) + add(num / 10));    
}

int main()
{
    int i;

    printf("input number to find addition of its elements: ");
    scanf("%lu", &i);

    printf("addition of the elements is: %lu\n", add(i));

    return (0);
}