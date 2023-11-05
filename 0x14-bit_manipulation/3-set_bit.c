#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 *
 * @n: inputs number.
 * @index: inputs index.
 *
 * Return: 1 if worked, 0 if failed.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned long int temp = 1;

	if (index > 63)
		return (-1);

	for (i = 0; i < index; i++)
	{
		temp *= 2;
	}

	if (*n & (1 << index))
		return (1);

	else
		{
			*n += temp;
			return (1);
		}
}
