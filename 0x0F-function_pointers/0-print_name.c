#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name string to be printed
 * @f: pointer to print function
 *
 * This function takes a name and a function pointer as arguments.
 * The function pointed to by @f is responsible for printing the
 * name in a specific format. The provided @name is passed as an
 * argument to the function pointed by @f, resulting in the name
 * being printed according to the specific function's
 * implementation.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL || *name == '\0')
		return;

	f(name);
}

