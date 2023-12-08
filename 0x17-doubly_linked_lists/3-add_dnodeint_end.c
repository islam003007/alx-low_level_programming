#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t.
 *
 * @head: inputs pointer to head.
 * @n: inputs value to be added.
 *
 * Return: the address of the new node or NULL in case of failiure.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;

	return (new);
}
