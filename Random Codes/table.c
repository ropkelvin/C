/*create table using loops*/

#include <stdio.h>

int main()
{
    int i = 0;

    do {
            int j = 0;
            while (j < 3)
                {
                    printf("|_|");
                    j++;
                }
            printf("\n");
            i++;
        } while (i < 5);    
    printf("\n");    
    return (0);    
}

