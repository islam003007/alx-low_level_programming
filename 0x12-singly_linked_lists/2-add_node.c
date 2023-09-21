#include "lists.h"


/**
 * _strlen - strlen
 *
 * @str: inputs string.
 *
 * Return: string length.
*/

unsigned int _strlen(char *str)
{
	unsigned int i;

	if (str == NULL || str[0] == '\0')
		return (0);

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * add_node - addes new node to list_t.
 *
 * @head: inputs pointer to list_t head.
 * @str: inputs str to addd.
 *
 * Return: pointer to new element.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
