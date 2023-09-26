#include "lists.h"

/**
 * free_listint - frees a listint_t.
 *
 * @head: inputs head.
*/

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);

		free(head);
	}
}
