#include "lists.h"

/**
 * print_list - prints all elemnts of a list_t list.
 *
 * @h: inputs pointer to the head of the list.
 *
 * Return: number of elements.
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", temp->len, temp->str);

		temp = temp->next;
		i++;
	}

	return (i);
}
