#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t.
 *
 * @head: inputs pointer to head.
 * @n: inputs value to be added.
 *
 * Return: address of new element or null in case of failiure.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
}
