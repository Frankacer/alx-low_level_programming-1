#include  "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of
 * a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the number, or -1 if it
 * does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	return (n);

	return (square_root_helper(n, 1, n));
}

/**
 * square_root_helper - Recursive helper function to calculate
 * the square root.
 * @n: The number to calculate the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The natural square root of the number, or -1
 * if it does not have a natural square root.
 */
int square_root_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);
	if (start == end || start == mid || end == mid)
		return (-1);
	if (mid * mid > n)
		return (square_root_helper(n, start, mid - 1));

	return (square_root_helper(n, mid + 1, end));
}

