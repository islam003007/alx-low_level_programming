#include "lists.h"

/**
 * free_list - frees a list_t.
 *
 * @head: inputs head.
*/

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		free(head->str);

		free(head);
	}
}
