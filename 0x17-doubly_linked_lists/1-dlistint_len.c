#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint_t.
 *
 * @h: inputs head.
 *
 * Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
