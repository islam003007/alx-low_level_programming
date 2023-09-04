#include "main.h"
/**
 * create_array - creates an array of chars and itializes it to a char.
 *
 * @size: inputs size of array.
 * @c: inputs char.
 *
 * Return: pointer to created array.
*/


char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
