#include "lists.h"

/**
 * add_nodeint - adds a new node a the beginning of a linked list.
 * @head: pointer to pointer of head of list
 * @n: new data
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

