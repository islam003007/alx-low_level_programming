#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nth node of a listint_t.
 *
 * @head: inputs pointer to head.
 * @index: inputs index.
 *
 * Return: 1 if succeeded and 0 if failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (idx != 0)
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
		}

		temp->next = temp->next->next;
		free(temp->next);
	}
	else
	{
		*head = temp->next;
		free(temp);
	}

	return (0);
}
