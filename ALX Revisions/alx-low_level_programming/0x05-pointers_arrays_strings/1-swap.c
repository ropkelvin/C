/*swaps the values of two integers.*/

#include "main.h"
#include <stdio.h>

void swap_int(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
} 
  