#include "main.h"

/**
 * _realloc - realloc
 *
 * @ptr: pointer to perviously allocated memory.
 * @old_size: size of perviously allocated memory.
 * @new_size: new size to reallocate.
 *
 * Return: void pointer the reallocated memory.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(sizeof(char) * new_size);

	if (ptr == NULL)
		return (new_ptr);

	if (new_ptr == NULL)
		return (NULL);

	if (old_size < new_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);

	return (new_ptr);
}
