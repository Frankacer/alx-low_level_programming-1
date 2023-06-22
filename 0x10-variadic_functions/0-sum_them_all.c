#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - computes sum of all parameters
 * @n: number of parameters
 * @...: variadic parameters
 *
 * Return: returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i <= n; i++)
		sum += va_arg(args, int);
	
	va_end(args);	
	return (sum);
}

