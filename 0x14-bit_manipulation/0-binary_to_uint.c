#include "main.h"



/**
 * binary_to_uint - convberts binary number to unsigned int.
 *
 * @b: inputs pointer to binary number.
 *
 * Return: unsigned int.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int temp = 1;
	unsigned int result = 0;
	int i;

	if (!*b)
		return (0);

	for (i = 0; b[i]; i++)
		;

	i--;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			result = 0;
			break;
		}
		if (b[i] == '1')
			result += temp;

		temp *= 2;
		i--;
	}

	return (result);
}
