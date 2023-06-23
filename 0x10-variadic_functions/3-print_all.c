#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_separator - prints separator
 * @c: current char in format string
 * @i: char index
 * @size: size of format string
 */
void print_separator(char c, int i, int size)
{
	char str[] = "cifs";
	int len = strlen(str);
	int j = 0;

	while (j < len - 1)
	{
		if (c == str[j])
		{
			if (i < size - 1)
			printf(", ");
			return;
		}
		j++;
	}
}

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
	/*Check format specifier*/
	while (format[i])
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
		/*print separator*/
		print_separator(format[i], i, strlen(format));
		i++;
	}
	printf("\n");
	va_end(args);
}

