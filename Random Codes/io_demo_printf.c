/* Demonstrate printf input and output */

#include <stdio.h>

int main(void)
{
    printf("My name initials are: %c%c and my age is: %d.\n",'R','K',27);
    printf("Can also split above senstence to two...\n");
    printf("My name initials are: %c%c. \nmy age is: %d.\n",'R','K',27);
    return(0);
}