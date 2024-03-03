#include <stdio.h>

int change_val(int a);

int main()
{
    int val;
    int *p;
    p = &val;

    val = 10;
    
    printf("Before change\n");
    printf("value is %d address is %x\n", val, p);

    change_val(val);

    printf("after change\n");
    printf("value is %d address is %x\n", val, p);

    return (0);

}