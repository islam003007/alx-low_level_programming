#include "main.h"

/**
 * flip_bits - returns the number of bits to flip from number to another.
 *
 * @n: inputs first number.
 * @m: inputs second number.
 *
 * Return: numver of bits to flip one number to another.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result = 0;

	for (i = 0; i < 64; i++)
	{
		if ((n & 1) != (m & 1))
			result++;
		n >>= 1;
		m >>= 1;
	}

	return (result);
}
