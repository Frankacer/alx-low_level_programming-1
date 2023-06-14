#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates a char array and initializes it with
 * a specific char
 * @size: size of array
 * @c: Char to initialize array with
 *
 *Return: returns pointer to char array, otherwise, returns NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(sizeof(char) * size);

	/*Check if memory allocation was successful*/
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

