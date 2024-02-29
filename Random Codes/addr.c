/*more address*/

#include <stdio.h>

void main(void)
{
    int a, b;
    int sum;
    int *p;
    
    a = 10;
    b = 20;
    sum = a + b;
    p = &sum;
    printf("sum is %d\n", sum);
    printf("address of a is %p\n", &a);
    printf("address of b is %p\n", &b);
    printf("adress of sum is %p\n", &sum);
    printf("value of p is %p\n", &p);
}