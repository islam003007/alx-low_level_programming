#include "main.h"

/**
 * array_range - creates an array of integers of min to max.
 *
 * @min: inputs minimum value.
 * @max: inputs maximum value.
 *
 * Return: pointer to allocated array.
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;

	return (arr);
}
