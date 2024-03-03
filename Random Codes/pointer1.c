/*pointers*/

#include <stdio.h>

void main()
{
    int a;
    int *p;

    a = 254;
    p = &a;

    printf("value of a is: %d at address: %x\n", a, p);
    printf("value of p is: %d at address: %x\n", *p, &p);

    *p = 10;

    printf("value of a is: %d at address: %x\n", a, p);


}