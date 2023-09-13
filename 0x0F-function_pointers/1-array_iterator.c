#include "function_pointers.h"

/**
 * array_iterator - excutes a function on each element of an array.
 *
 * @array: inputs array.
 * @size: inputs array size.
 * @action: inputs pointer to action fucntion.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
