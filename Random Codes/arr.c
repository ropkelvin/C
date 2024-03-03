/*create array*/

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < 5; i++)
        {
            printf("arr[%d] is %d\n", i, arr[i]);
            printf("address is %d\n", &arr[i]);
        }
    return (0);
}

