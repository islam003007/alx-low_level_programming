#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given index.
 *
 * @h: inputs pointer to head.
 * @idx: inputs index.
 * @n: inputs value to be added.
 *
 * Return: pointer to the given index.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h;
	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	if (idx > i)
		return (NULL);

	if (idx == i)
		return (add_dnodeint_end(h, n));

	i = 0;
	temp = *h;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	new->next->prev = new;
	return (new);
}
