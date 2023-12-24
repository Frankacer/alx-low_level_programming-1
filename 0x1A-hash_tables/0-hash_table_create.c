#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of table
 *
 * Return: returns a pointer to the newly created table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *h_table;

	/*Dynamically allocate memory for table*/
	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	/*Dynamically allocate memory for array*/
	h_table->array = malloc(size * sizeof(hash_node_t *));
	if (h_table->array == NULL)
		return (NULL);

	/*Initialize each array element to NULL*/
	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;

	/*Set table size*/
	h_table->size = size;

	return (h_table);
}
