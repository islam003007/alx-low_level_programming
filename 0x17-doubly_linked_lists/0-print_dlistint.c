#include "lists.h"

/**
 * print_dlistint - prints a dlistint_t.
 *
 * @h: inputs head.
 *
 * Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
