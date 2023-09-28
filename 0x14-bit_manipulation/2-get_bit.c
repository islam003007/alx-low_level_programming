#include "main.h"

/**
 * get_bit -  returns value of a bit at a given index
 *
 * @n: inputs a number.
 * @index: inputs index.
 *
 * Return: value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);

	if (index > 32)
		return (-1);

	return (bit & 1);
}
