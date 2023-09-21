#include "lists.h"

/**
 * list_len - prints the number of elements in a list-t.
 *
 * @h: inputs head:
 *
 * Return: numper of elemnts.
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
