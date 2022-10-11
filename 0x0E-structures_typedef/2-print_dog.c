#include "dog.h"
#include <stdio.h>

/**
 * d - pointer to the name of variable
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
