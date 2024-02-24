/*Prints all letters except q and n in lowercase*/

#include <stdio.h>

int main()
{
   char alph;
   for (alph = 'a'; alph <= 'z'; alph++)
   {
        if ((alph == 'q' || alph == 'n') !=1)
            {
                putchar(alph);
            }                
   }               
    putchar('\n');
    return (0);        
}