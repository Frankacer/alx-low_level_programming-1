#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name string to be printed
 * @f: pointer to print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || *name == '\0')
		return;

	f(name);
}

