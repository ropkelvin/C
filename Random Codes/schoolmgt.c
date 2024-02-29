/*find mean marks of a student*/

#include <stdio.h>

double mean_mark(int marks[], int size)
{
    double mean;
    int sum = 0;
    int i;

    for (i = 0; i < size; i++)
        {
            sum += marks[i];
        }
    mean = sum / size; 
    return (mean);    
}