/*testing macro*/

#include <stdio.h>
#define PI 3.14

float circle_area(int rad)
{
    rad = rad * rad;
    float area;


    area = PI * rad;
    return (area);

}

int main()
{
    float rad;
    printf("Enter radius: ");
    scanf("%f", &rad);

    printf("The area is: %f\n", circle_area(rad));
    return (0);
}