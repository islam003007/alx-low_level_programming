#include "lists.h"

/**
 * free_dlistint - frees a dlistint.
 *
 * @head: inputs head.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = head;

	if (head == NULL)
		return;

	while (next != NULL)
	{
		head = next;
		next = head->next;
		free(head->next);
		free(head->prev);
		free(head);
	}
}
