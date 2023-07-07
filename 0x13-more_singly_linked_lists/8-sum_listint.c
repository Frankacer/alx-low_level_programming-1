#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: pointer to head of listint_t list.
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		sum += head->n;
		head = head->n;
	}
	return (sum);
}
