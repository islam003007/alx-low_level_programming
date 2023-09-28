#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 *
 * @n: inputs first number.
 * @m: inputs second number.
 *
 * Return: flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flips = 0;

	for (i = 0; i < 32; i++)
	{
		if ((m & 1) != (n & 1))
			flips += 1;

		n = n >> 1;
		m = m >> 1;
	}

	return (flips);
}
