#include "main.h"

/**
 * is_prime_helper - helps is_prime_number
 * @n: input integer
 * @b: test divisor
 *
 * Return: returns 1 if prime and 0 otherwise.
 */
int is_prime_helper(int n, int b)
{
	if (b == 1)
		return (1);

	else if (n % b)
		return (is_prime_helper(n, b - 1));

	else
		return (0);
}

/**
 * is_prime_number - recursively checks if an integer is
 * prime
 * @n: input integer
 *
 * Return: returns 1 if prime and 0 otherwise.
 */
int is_prime_number(int n)
{
	int d;

	d = n / 2;
	return (is_prime_helper(n, d));
}

