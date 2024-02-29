/*find bigger number between two*/

#include <stdio.h>

int max(int a, int b)
{
    int result;
    if (a > b)
        {
            result = a;
        }
    else
        {
        result = b;
        }
    return(result);    

}

int main()
{
    int a;
    int i, j;
    printf("Enter two numbers to compare.\n");
    printf("First: ");
    scanf("%d", &i);
    printf("Second: ");
    scanf("%d", &j);
    a = max(i, j);
    printf("Bigger number is %d.\n", a);
    return (0);
}