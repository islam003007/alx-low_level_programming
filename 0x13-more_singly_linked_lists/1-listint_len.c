#include "lists.h"

/**
 * listint_len - prints the number of elements in a listint-t.
 *
 * @h: inputs head:
 *
 * Return: numper of elemnts.
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
