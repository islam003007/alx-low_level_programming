#include "function_pointers.h"

/**
 * int_index - searches for an int.
 *
 * @array: inputs array.
 * @size: inputs array size.
 * @cmp: inputs pointer to compare fucntion.
 *
 * Return: index to element , if no element found returns -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size >= 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
