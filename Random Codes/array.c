/*simple array*/

#include <stdio.h>

int main()
{
    int num[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < 5; i++)
        {
            printf("num[%d] is %d\n",i, num[i]);
        }
    return (0);
}