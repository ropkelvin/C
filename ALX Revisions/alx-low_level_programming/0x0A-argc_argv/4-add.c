/*adds positive numbers.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i;
    int j;
    int sum;

    if (argc == 1)
        printf("0\n");

    for (i = 0; i < argc; i++)
        {
           if (strcmp(argv[i], "int") != 0)
                printf("Error\n");
        }

    for (j = 1; j < argc; j++)
        {
            sum += atoi(argv[j]);
        }

    printf("%d", sum);
    return (0);
}