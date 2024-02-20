#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

char main()
{
    char c;
    c = CHAR_MIN;

    while(c != CHAR_MAX)
    {
        printf("%d\n", c);
        c+=1;
    }
exit(EXIT_SUCCESS);
}