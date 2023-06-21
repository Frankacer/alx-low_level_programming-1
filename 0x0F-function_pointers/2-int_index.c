#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of areay
 * @cmp: pointer to compare function
 *
 * Return: returns index to integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int p;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		p = cmp(array[i]);

		if (p)
			return (i);
	}

	return (-1);
}

