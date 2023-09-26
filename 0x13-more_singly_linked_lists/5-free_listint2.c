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

/**
 * free_listint2 - frees a listint_t.
 *
 * @head: inputs pointer to head.
*/

void free_listint2(listint_t **head)
{
	free_listint(*head);

    *head = NULL;
}
