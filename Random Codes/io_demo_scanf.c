/* Demonstrate input output using scanf */

#include <stdio.h>

int main(void)
{
    int f;
    int m;
    int age;

    printf("Enter your initials followed by age: \n");
    scanf("%c %c %d", &f, &m, &age);
    printf("My initials are %c%c and my age is %d.\n",f,m,age);
    return(0);
}
