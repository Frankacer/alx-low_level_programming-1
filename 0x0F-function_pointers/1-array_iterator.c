#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an
 * array.
 * @array: array to be iterated over
 * @size: size of array
 * @action: pointer to function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action || !size)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

