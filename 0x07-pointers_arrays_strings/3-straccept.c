#include "main.h"

int straccept(char c, char *accept)

{

	int i;



	for (i = 0; accept[i] != '\0'; i++)

	{

		if (c == accept[i])

			return (1);

	}

	return (0);

}
