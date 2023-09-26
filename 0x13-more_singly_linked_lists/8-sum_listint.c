#include "lists.h"

/**
 * sum_listint - returns sum of all data in a listint_t.
 *
 * @head: inputs head.
 *
 * Return: sum off all data in the list.
*/


int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
