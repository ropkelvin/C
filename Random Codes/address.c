/*check address of variable*/

#include <stdio.h>

int main()
{
    int a, b;
    int sum;
    int *addr;

   printf("Enter first number: ");
   scanf("%d", &a);
   printf("Enter second number: ");
   scanf("%d", &b);
    sum = a + b;
    addr = &sum;

    printf("Sum is %d and is stored in address %d\n",sum, addr);

}