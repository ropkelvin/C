/*sum of elements in arrray*/

#include <stdio.h>

int sum_arr(int a[], int size)
{
    int i;
    int sum;
    for (i = 0; i < size; i++)
        {
            sum = sum + a[i];
        }
    return (sum);    
}

int main()
{
    int elements[] = {10, 20, 30, 40, 50};
    int sum, size;

    size = sizeof(elements) / sizeof(elements[0]);
    sum = sum_arr(elements, size);
    printf("The sum is : %d\n", sum);

    return (0);
}