#include "lists.h"

/**
 * _strlen - strlen
 *
 * @str: inputs string.
 *
 * Return: string length.
*/

unsigned int _strlen(const char *str)
{
	unsigned int i;

	if (str == NULL || str[0] == '\0')
		return (0);

	for (i = 0; str[i]; i++)
		;

	return (i);
}


/**
 * add_node_end - adds node at the end of the list_t.
 *
 * @head: inputs pointer to head.
 * @str: inputs str to be added.
 *
 * Return: address of the new element or NULL if fail
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
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
