#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: input number
 *
 * Return: returns the result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (!n)
		return (1);

	return (n * factorial(n - 1));
}

