#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index in a dlistint_t.
 *
 * @head: inputs pointer to head.
 * @index: inputs index.
 *
 * Return: 1 if it succeeded, 0 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0, i;
	dlistint_t *temp = *head;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	if (index > (len - 1))
		return (0);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);

	}

	temp = *head;
	for (i = 0; i < index - 1; i++)
		temp = temp->next;
	if (index == (len - 1))
	{
		free(temp->next);
		temp->next = NULL;
	}
	else
	{
		dlistint_t *temp_next = temp->next;

		temp_next->next->prev = temp;
		temp->next = temp_next->next;
		free(temp_next);
	}

	return (1);
}
