#include "main.h"

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0))
	{
		return (0);
	}
	 if (!((n % 2 == 0) && (n % 3 == 0) && (n % 5 == 0) && (n % 7 == 0)))
	{
		return (1);
	}
	return (is_prime_number(n));
}
