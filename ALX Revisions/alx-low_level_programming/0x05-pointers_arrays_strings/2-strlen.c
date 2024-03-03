/* returns the length of a string.*/

#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
    int i;
    int len = 0;

    for (i = 0; s[i] != '\0'; i++)
        {
            len++;
        }
    return (len);    


    
}