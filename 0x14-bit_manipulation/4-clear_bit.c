#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: inputs pointer to number.
 * @index: inputs index.
 *
 * Return: 1 if success, -1 if failed.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	index = 1 << index;
	index *= -1;
	index -= 1;
	*n &= index;

	return (1);
}
