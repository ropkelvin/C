/*more while loop*/

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    while (a <= 9)
        {
            b = 0;
            while (b <= 9)
                {
                    printf("%d%d ,", a, b);
                    b++;
                }
            a++;
        }  
         printf("\nDouble numbers printed\n");
    return (0);        
}