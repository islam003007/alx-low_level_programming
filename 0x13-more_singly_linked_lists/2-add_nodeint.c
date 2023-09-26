#include "lists.h"



/**
 * add_nodeint - addes new node to listint_t.
 *
 * @head: inputs pointer to listint_t head.
 * @n: inputs int to add.
 *
 * Return: pointer to new element.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
