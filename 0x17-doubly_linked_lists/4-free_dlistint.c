#include "lists.h"

/**
 * free_dlistint - frees a dlistint.
 *
 * @head: inputs head.
*/
void free_dlistint(dlistint_t *head)
{

	if (head == NULL)
		return;

	do {
		free(head->prev);
		free(head);
	} while (head->next != NULL);
	free(head->prev);
	free(head);
}
