#include "main.h"

/**
 * _calloc - calloc .
 *
 * @nmemb: inputs number of elements.
 * @size: inputs size of each element.
 *
 * Return: pointer the allocated space.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);


	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)(ptr + i) = 0;

	return (ptr);
}
