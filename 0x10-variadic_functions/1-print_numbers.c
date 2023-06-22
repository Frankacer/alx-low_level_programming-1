#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *        If n is 0, only the new line is printed.
 *        If n is 1, only the first number is printed.
 *        If n is greater than 1, all numbers are printed with the
 *        separator.
 * @...: Variable number of integers to be printed.
 *       The number of integers must match the value of n.
 *
 * Description:
 * This function prints a variable number of integers separated by
 * the provided
 * separator string. The function uses printf to perform the print
 * ing.
 * If separator is NULL, it is not printed.
 * After printing the numbers, a new line is printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(args, int), separator);

	if (n == 0)
		printf("\n");

	else
		printf("%d\n", va_arg(args, int));

	va_end(args);
}


