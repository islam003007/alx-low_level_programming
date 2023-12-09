#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a dlistint_t.
 *
 * @head: inputs head.
 *
 * Return: the sum of all data of a dlistint_t
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
