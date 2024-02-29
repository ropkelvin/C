#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("value of c is: %d(%c)\naddress of c is: %p\n",c, c, &c);
   printf("value of p is: %p\naddress of p is: %p\n",&c, &p);
   modif_my_char_var(p, c);
   printf("after modification function\n");
   printf("value of c is: %d(%c)\naddress of c is: %p\n",c, c, &c);
   printf("value of p is: %p\naddress of p is: %p\n",&c, &p);

   return (0);
}