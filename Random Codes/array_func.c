/*pass array functiom*/

#include <stdio.h>

double get_average(int array[], int size);

int main()
{
    int marks[5] = {40, 60, 80, 100, 120};
    double average;

    average = get_average(marks, 5);
    printf("average is: %f\n", average);
    return (0);
}