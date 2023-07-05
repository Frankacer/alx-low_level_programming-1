#include "lists.h"

/**
 * print_listint - prints a singly linked list
 * @h: pointer to linked list
 *
 * Return: returns number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/*Traverse list and increment count*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

