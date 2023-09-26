#include "lists.h"


size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%i\n", temp->n);

		temp = temp->next;
		i++;
	}

	return (i);   
}
