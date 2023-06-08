#include "main.h"

/**
 * _pow_recursion - computes the exponentiation of a number
 * @x: base number
 * @y: index number
 *
 * Return: returns result. Returns -1 for values of y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	return (x * _pow_recursion(x, --y));
}

