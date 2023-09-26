#include "lists.h"

/**
 * reverse_listint - reverses a listint_t.
 *
 * @head: inputs pointer to head.
 *
 * Return: head.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
