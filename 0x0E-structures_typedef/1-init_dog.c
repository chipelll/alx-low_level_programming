#include <stdio.h>
#include "dog.h"

/**
 * init_dog - to initialize a variable of type struct dog
 * *d: the name of variable
 * *name: name of dog
 * *age: age of dog
 * *owner: owner of the dog
 * 
 * Return: initialized variables
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
