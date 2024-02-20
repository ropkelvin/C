/*Get age from user*/

#include <stdio.h>

int main(void)
{
	char name[32];
	int age;
	printf("Input your name: ");
	scanf("%s", &name);
	printf("Input your age: ");
	scanf("%d", &age);
	printf("Your age is: %d\n", age);

	if (age <= 30)
		{
			printf("%s, You are still young\n", name);
		}
	else if (age > 30 && age <= 60)
		{
			printf("%s, You are starting to get old\n", name);
		}
	else
		{
			printf("%s, You are old\n", name);
		}
	return (age);

}
