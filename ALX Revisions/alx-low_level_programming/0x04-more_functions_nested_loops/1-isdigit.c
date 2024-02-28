/*Checks for a digit(1 through 9)*/

#include "main.h"

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);    
}