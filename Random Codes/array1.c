/*more arrays*/

#include <stdio.h>

int main()
{
    int num[10];
    int i, j;

    for (i = 0; i < 10; i++)
        {
            num[i] = i + 20;
        }
    for (j = 0; j < 10; j++)
        {
            printf("num[%d] : %d\n",j, num[j]);
        }
    printf("\n");
    return (0);    
}