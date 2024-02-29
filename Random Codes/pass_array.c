/*pass array to function*/

#include <stdio.h>

double get_average(int array[], int size)
{
    int i;
    double avg;
    double sum;

    for (i = 0; i < size; i++)
        {
            sum += array[i];
        }
    avg = sum / size;
    return (avg);    
}