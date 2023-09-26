#include "lists.h"

/**
 * pop_listint - deletes head node and returns it.
 *
 * @head: pointer to head.
 *
 * Return: data in head.
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *new;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	*new = (*head)->next;

	free(*head);
	*head = new;

	return (data);
}
