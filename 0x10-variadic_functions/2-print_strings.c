#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *        If n is 0, only the new line is printed.
 *        If n is 1, only the first string is printed.
 *        If n is greater than 1, all strings are printed with the
 *        separator.
 * @...: Variable number of strings to be printed.
 *       The number of strings must match the value of n.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

