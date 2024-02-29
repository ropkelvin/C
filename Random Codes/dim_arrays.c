/*multi dimentinal arrays*/

#include <stdio.h>

int main()
{
    int d_nums[2][2] = {{0,0},{1,2}};
    int i, j;

    for (i = 0; i< 2; i++)
        {
            for (j = 0; j < 2; j++)
                {
                    printf("d_nums[%d][%d] is %d\n",i, j, d_nums[i][j]);
                }
        }
    return(0);    
}