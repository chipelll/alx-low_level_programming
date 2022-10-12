#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns the index of the array matching the number
 * @array: name of array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
	}
	return (-1);
}
