#include "main.h"

/**
 * rev_string - To reverse a string
 * @s: function argument
 *
 * Return: 0 if succeess
 */

void rev_string(char *s)
{
	int i = 0, b = 0;

	char c;					I = 0; 
						After i++ or ++i 
						i = 1;
						i++ = 0;	
						++i = 1;
	for (; s[i] != '\0'; i++)		
	{				
	}					I = 2;
						After i-- or --i
	while (b < i--)           		i = 1;
						i-- = 2;
	{					--i = 1;
		c = s[b];
		s[b++] = s[i];
		s[i] = c;
	}
}
