#include "main.h"

/**
 * get_bit - return the value of a bit at given index.
 *
 * @n: inputs number.
 * @index: inputs index.
 *
 * Return: value of a bit at a given index.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	else if (n & (1 << index))
		return (1);
	else
		return (0);
}
