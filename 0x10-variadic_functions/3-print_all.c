#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - prints all types
 * @format: format string
 * @...; variadic arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);
	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
		}
		if (format[i + 1] &&
	(format[i] == 'c' || format[i] == 'i' ||
	format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

