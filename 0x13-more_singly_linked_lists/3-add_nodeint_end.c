#include "lists.h"


/**
 * add_nodeint_end - adds node at the end of the listint_t.
 *
 * @head: inputs pointer to head.
 * @n: inputs int to add.
 *
 * Return: address of the new element or NULL if fail
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	list_t *temp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}
