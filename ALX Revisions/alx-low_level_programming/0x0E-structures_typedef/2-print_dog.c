#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    if (d != NULL) 
        {
            printf("Dog's name: %s\n", d->name ? d->name : "(nil)");
            printf("Dog's age: %.1f\n", d->age);
            printf("Dog's owner: %s\n", d->owner ? d->owner : "(nil)");
        }
}