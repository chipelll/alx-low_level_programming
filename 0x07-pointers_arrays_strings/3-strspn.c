#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search through
 * @accept: the string you wish to find
 *
 * Return: the length
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

int i;

int j;

for (i = 0 ; s[i] != '\0' ; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s == accept[i])
		{
			return (1);
		}
		else
		{
			break;
		}
	}
	count++;
}
return (count);
}
