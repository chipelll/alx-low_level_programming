#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - to add two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: value of sum
 */

int op_add(int a,int b)
{
	return (a + b);
}

/**
 * op_sub - to subtract two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: value of subtracction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - to multiply two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: value of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - to divide two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: value of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - to find mod of a number based on a number
 * @a: first argument
 * @b: second argument
 *
 * Return: value of modulus
 */

int op_mod(int a, int b)
{
	return (a % b);
}
