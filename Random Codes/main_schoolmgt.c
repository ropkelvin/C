/*schoolmgt main function*/

#include <stdio.h>

double mean_mark(int marks[], int size);

int main()
{
    int marks[5];
    double average;

    printf("Inputs marks for subjects:-\n");
    printf("Maths: ");
    scanf("%d", &marks[0]);
    printf("English: ");
    scanf("%d", &marks[1]);
    printf("Kiswahili: ");
    scanf("%d", &marks[2]);
    printf("Science: ");
    scanf("%d", &marks[3]);
    printf("Social Studies: ");
    scanf("%d", &marks[4]);


    average = mean_mark(marks, 5);
    printf("Average is: %f\n", average);
    return (0);
}