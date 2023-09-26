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

	if (head == NULL || *head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
	{
		*head = (*head)->next;

		if (*head == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	new->n = n;
	new->next = (*head)->next;
	(*head)->next = new;

	return (new);
}
