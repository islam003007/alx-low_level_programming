#include "lists.h"

/**
 * get_dnodeint_at_index - returns the address of a node given and index.
 *
 * @head: inputs head.
 * @index: inputs index.
 *
 * Return: the address of the nth node.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	return (head);
}
