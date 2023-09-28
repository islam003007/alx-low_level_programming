#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: inputs number.
 * @index: inputs index.
 *
 * Return: 1 on success, -1 or error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
