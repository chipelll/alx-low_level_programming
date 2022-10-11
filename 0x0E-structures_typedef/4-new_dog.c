#include "dog.h"
#include <stdio.h>

/**
 * new_dog - to create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dogged;
	dog_t *ptr=&dogged;
	if (ptr == NULL)
	{
		return (0);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
