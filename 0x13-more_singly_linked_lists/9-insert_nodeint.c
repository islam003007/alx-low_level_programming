#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at given index of a listint_t.
 *
 * @head: inputs pointer to head.
 * @idx: inputs index.
 * @n: inputs data to add.
 *
 * Return: pointer to the new node or NULL if failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;

			if (temp == NULL)
				return (NULL);
		}
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx != 0)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
