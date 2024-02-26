/*Returns max number*/

#include <stdio.h>

int max_num(int num1, int num2)
{
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return (result);    
}

int main()
{
   int num1 = 10;
   int num2 = 20; 
   printf("%d is larger.\n", max_num(num1, num2));
}