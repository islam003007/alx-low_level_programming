#include "main.h"

/**
 * _islower - checks litter if it is lower case
 *
 * @c: checks the input
 *
 * Return: 1 (lower case) , 0 (anything else)
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
