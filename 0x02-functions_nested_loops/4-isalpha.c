#include "main.h"

/**
 * _isalpha - checks litter if it is uppercase
 *
 * @c: checks the input
 *
 * Return: 1 (uppercase) , 0 (anything else)
 */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	return (0);
}
