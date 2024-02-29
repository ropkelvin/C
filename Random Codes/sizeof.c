/*checks size of data types*/

#include <stdio.h>
/**
 * size - determines size of a data type
 * return: void
*/

void size(void)
{
	printf("Size of char is: %d\n", sizeof(char));
	printf("Size of int is: %d\n", sizeof(int));
	printf("Size of float is: %d\n", sizeof(float));
}

/**
 * main - main function
 * Return: 0
*/

int main(void)
{
	size();
	return (0);
}
