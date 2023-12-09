#include "lists.h"

/**
 * free_dlistint - frees a dlistint.
 *
 * @head: inputs head.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	do {
		temp = head->next;
		free(head);
		head = temp;
	} while (head != NULL);
}
