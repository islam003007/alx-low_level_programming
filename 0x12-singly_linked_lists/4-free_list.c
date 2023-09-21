#include "lists.h"

/**
 * free_list - frees a list_t.
 *
 * @head: inputs head.
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;

		while (temp->next != NULL)
			temp = temp->next;

		free(temp->str);
		free(temp);
	}
}
