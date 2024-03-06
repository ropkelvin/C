/*testing malloc*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *nums;

    nums = malloc(sizeof(*nums) * 3);
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;

    printf("%d %d %d\n", nums[0], nums[1], nums[2]);
    free(nums);
    return (0);
}