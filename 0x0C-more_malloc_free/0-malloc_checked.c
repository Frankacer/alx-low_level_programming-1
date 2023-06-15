#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a specific size of memory
 * @b: size
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/*Allocate dynamic memory*/
	ptr = malloc(b);

	/*Check for success of allocation*/
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

