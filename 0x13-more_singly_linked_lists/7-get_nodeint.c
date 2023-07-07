#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list.
 * @head: pointer to head of listint_t list
 * @index: index of node starting at 0
 *
 * Return: the node at index, otherwise NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	/*Allocate memory for node and check success*/
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	/*Traverse list*/
	while (head && i <= index)
	{
		if (i == index)
		{
			node = head;
			return (node);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}

