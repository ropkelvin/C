#include <stdio.h>

int change_val(int a)
{
    int *p;
    p = &a;

    *p = 20;
    return (a);
}