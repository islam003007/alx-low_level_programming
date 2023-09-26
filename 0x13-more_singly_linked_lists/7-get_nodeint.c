#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a listint_t.
 *
 * @head: inputs head.
 * @index: inputs index.
 *
 * Return: node to nth node or NULL if it doesn't exist.
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
